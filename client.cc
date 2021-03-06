// Client side C/C++ program to demonstrate Socket programming 

#include <stdio.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <unistd.h> 
#include <string.h> 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <chrono>

#include "messages.pb.h"

#define PORT 9999 

using namespace std;

void read_file(const char* filename, std::vector<char>& buffer);
void send(int sock, std::vector<char>& buffer);

int main(int argc, char const *argv[]) 
{ 
	int sock = 0; 
	struct sockaddr_in serv_addr; 

	if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
	{ 
		printf("\n Socket creation error \n"); 
		return -1; 
	} 

	serv_addr.sin_family = AF_INET; 
	serv_addr.sin_port = htons(PORT); 
	
	// Convert IPv4 and IPv6 addresses from text to binary form 
	if(inet_pton(AF_INET, "50.97.250.146", &serv_addr.sin_addr)<=0) 
	{ 
		printf("\nInvalid address/ Address not supported \n"); 
		return -1; 
	} 

	if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
	{ 
		printf("\nConnection Failed \n"); 
		return -1; 
	} 
	//const char* filename = "dataTransfer_1m.csv";
	const char* filename = "dataTransfer_2m5.csv";
	//const char* filename = "test.txt";
	std::vector<char> buffer;
	read_file(filename, buffer);
	char received[12] = {0};
	auto t1 = std::chrono::high_resolution_clock::now();
	send(sock, buffer);
	memset(received, '\0', 12);
	read(sock, received, 12);
	std::cout << received << std::endl;
	auto t2 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
	std::cout << "time: "<< duration << std::endl;
	return 0; 
} 

void read_file(const char* filename, std::vector<char>& buffer) {
	const std::string inputFile(filename);	
	std::ifstream inFile(inputFile, std::ios_base::binary);

	inFile.seekg(0, std::ios_base::end);
	size_t length = inFile.tellg();
	inFile.seekg(0, std::ios_base::beg);
	std::cout << "origin bytes: " << length << std::endl;

	buffer.reserve(length);
	std::copy(std::istreambuf_iterator<char>(inFile),
	    std::istreambuf_iterator<char>(),
		std::back_inserter(buffer));
	
	return;
}

void send(int sock, std::vector<char>& file_buffer) {
	Messages::Matrix message;
	message.set_rows(2);
	message.set_cols(3);
	std::string msg2send(file_buffer.begin(), file_buffer.end());
	std::cout << "msg2send size: " << msg2send.size() << std::endl;
	message.add_stringdata(msg2send.c_str());
	std::string buffer_msg;
	message.SerializeToString(&buffer_msg);
	std::cout << "after serialized bytes: " << buffer_msg.length() << std::endl;

/*
	char* buffer = (char*)malloc(sizeof(char)*buffer_msg.length() + 6);
	int buffer_msg_len = buffer_msg.length();
	memset(buffer, '\0', sizeof(char)*buffer_msg_len + 6);
	memcpy(buffer, &buffer_msg_len, sizeof(int));
	memcpy(buffer+sizeof(int)+1, buffer_msg.c_str(), buffer_msg_len);
	send(sock, buffer, sizeof(char)*buffer_msg_len + 6, 0);
*/
	int size = buffer_msg.length();
	char buffer_header[5];
	memset(buffer_header, '\0', 5);
	memcpy(buffer_header, (char*) &size, sizeof(int));
	send(sock, buffer_header, 5, 0);
	send(sock, buffer_msg.c_str(), buffer_msg.length(), 0 );
	std::cout << "msg sent!\n";
}


