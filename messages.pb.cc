// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#include "messages.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace Messages {
class MatrixDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Matrix> _instance;
} _Matrix_default_instance_;
}  // namespace Messages
static void InitDefaultsscc_info_Matrix_messages_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Messages::_Matrix_default_instance_;
    new (ptr) ::Messages::Matrix();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Messages::Matrix::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Matrix_messages_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_Matrix_messages_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_messages_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_messages_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_messages_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_messages_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Messages::Matrix, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Messages::Matrix, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Messages::Matrix, rows_),
  PROTOBUF_FIELD_OFFSET(::Messages::Matrix, cols_),
  PROTOBUF_FIELD_OFFSET(::Messages::Matrix, stringdata_),
  PROTOBUF_FIELD_OFFSET(::Messages::Matrix, intdata_),
  PROTOBUF_FIELD_OFFSET(::Messages::Matrix, doubledata_),
  0,
  1,
  ~0u,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::Messages::Matrix)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Messages::_Matrix_default_instance_),
};

const char descriptor_table_protodef_messages_2eproto[] =
  "\n\016messages.proto\022\010Messages\"]\n\006Matrix\022\014\n\004"
  "rows\030\001 \002(\r\022\014\n\004cols\030\002 \002(\r\022\022\n\nstringdata\030\003"
  " \003(\t\022\017\n\007intdata\030\004 \003(\r\022\022\n\ndoubledata\030\005 \003("
  "\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_messages_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_messages_2eproto_sccs[1] = {
  &scc_info_Matrix_messages_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_messages_2eproto_once;
static bool descriptor_table_messages_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_2eproto = {
  &descriptor_table_messages_2eproto_initialized, descriptor_table_protodef_messages_2eproto, "messages.proto", 121,
  &descriptor_table_messages_2eproto_once, descriptor_table_messages_2eproto_sccs, descriptor_table_messages_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_messages_2eproto::offsets,
  file_level_metadata_messages_2eproto, 1, file_level_enum_descriptors_messages_2eproto, file_level_service_descriptors_messages_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_messages_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_messages_2eproto), true);
namespace Messages {

// ===================================================================

void Matrix::InitAsDefaultInstance() {
}
class Matrix::HasBitSetters {
 public:
  using HasBits = decltype(std::declval<Matrix>()._has_bits_);
  static void set_has_rows(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_cols(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Matrix::kRowsFieldNumber;
const int Matrix::kColsFieldNumber;
const int Matrix::kStringdataFieldNumber;
const int Matrix::kIntdataFieldNumber;
const int Matrix::kDoubledataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Matrix::Matrix()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Messages.Matrix)
}
Matrix::Matrix(const Matrix& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      stringdata_(from.stringdata_),
      intdata_(from.intdata_),
      doubledata_(from.doubledata_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&rows_, &from.rows_,
    static_cast<size_t>(reinterpret_cast<char*>(&cols_) -
    reinterpret_cast<char*>(&rows_)) + sizeof(cols_));
  // @@protoc_insertion_point(copy_constructor:Messages.Matrix)
}

void Matrix::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Matrix_messages_2eproto.base);
  ::memset(&rows_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&cols_) -
      reinterpret_cast<char*>(&rows_)) + sizeof(cols_));
}

Matrix::~Matrix() {
  // @@protoc_insertion_point(destructor:Messages.Matrix)
  SharedDtor();
}

void Matrix::SharedDtor() {
}

void Matrix::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Matrix& Matrix::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Matrix_messages_2eproto.base);
  return *internal_default_instance();
}


void Matrix::Clear() {
// @@protoc_insertion_point(message_clear_start:Messages.Matrix)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  stringdata_.Clear();
  intdata_.Clear();
  doubledata_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&rows_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&cols_) -
        reinterpret_cast<char*>(&rows_)) + sizeof(cols_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Matrix::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  HasBitSetters::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 rows = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          HasBitSetters::set_has_rows(&has_bits);
          rows_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 cols = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          HasBitSetters::set_has_cols(&has_bits);
          cols_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string stringdata = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(add_stringdata(), ptr, ctx, "Messages.Matrix.stringdata");
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 26);
        } else goto handle_unusual;
        continue;
      // repeated uint32 intdata = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ptr -= 1;
          do {
            ptr += 1;
            add_intdata(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 32);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(mutable_intdata(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated double doubledata = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          ptr -= 1;
          do {
            ptr += 1;
            add_doubledata(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
            ptr += sizeof(double);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 41);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(mutable_doubledata(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Matrix::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:Messages.Matrix)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 rows = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          HasBitSetters::set_has_rows(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rows_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 cols = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          HasBitSetters::set_has_cols(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cols_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string stringdata = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->add_stringdata()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->stringdata(this->stringdata_size() - 1).data(),
            static_cast<int>(this->stringdata(this->stringdata_size() - 1).length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "Messages.Matrix.stringdata");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 intdata = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 1, 32u, input, this->mutable_intdata())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_intdata())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated double doubledata = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (41 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadRepeatedPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 41u, input, this->mutable_doubledata())));
        } else if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_doubledata())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Messages.Matrix)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Messages.Matrix)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Matrix::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Messages.Matrix)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 rows = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(1, this->rows(), output);
  }

  // required uint32 cols = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(2, this->cols(), output);
  }

  // repeated string stringdata = 3;
  for (int i = 0, n = this->stringdata_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->stringdata(i).data(), static_cast<int>(this->stringdata(i).length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Messages.Matrix.stringdata");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteString(
      3, this->stringdata(i), output);
  }

  // repeated uint32 intdata = 4;
  for (int i = 0, n = this->intdata_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(
      4, this->intdata(i), output);
  }

  // repeated double doubledata = 5;
  for (int i = 0, n = this->doubledata_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(
      5, this->doubledata(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Messages.Matrix)
}

::PROTOBUF_NAMESPACE_ID::uint8* Matrix::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Messages.Matrix)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 rows = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->rows(), target);
  }

  // required uint32 cols = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->cols(), target);
  }

  // repeated string stringdata = 3;
  for (int i = 0, n = this->stringdata_size(); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->stringdata(i).data(), static_cast<int>(this->stringdata(i).length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Messages.Matrix.stringdata");
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      WriteStringToArray(3, this->stringdata(i), target);
  }

  // repeated uint32 intdata = 4;
  target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
    WriteUInt32ToArray(4, this->intdata_, target);

  // repeated double doubledata = 5;
  target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
    WriteDoubleToArray(5, this->doubledata_, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Messages.Matrix)
  return target;
}

size_t Matrix::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Messages.Matrix)
  size_t total_size = 0;

  if (has_rows()) {
    // required uint32 rows = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->rows());
  }

  if (has_cols()) {
    // required uint32 cols = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->cols());
  }

  return total_size;
}
size_t Matrix::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Messages.Matrix)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 rows = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->rows());

    // required uint32 cols = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->cols());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string stringdata = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->stringdata_size());
  for (int i = 0, n = this->stringdata_size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      this->stringdata(i));
  }

  // repeated uint32 intdata = 4;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt32Size(this->intdata_);
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->intdata_size());
    total_size += data_size;
  }

  // repeated double doubledata = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->doubledata_size());
    size_t data_size = 8UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->doubledata_size());
    total_size += data_size;
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Matrix::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Messages.Matrix)
  GOOGLE_DCHECK_NE(&from, this);
  const Matrix* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Matrix>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Messages.Matrix)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Messages.Matrix)
    MergeFrom(*source);
  }
}

void Matrix::MergeFrom(const Matrix& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Messages.Matrix)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  stringdata_.MergeFrom(from.stringdata_);
  intdata_.MergeFrom(from.intdata_);
  doubledata_.MergeFrom(from.doubledata_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      rows_ = from.rows_;
    }
    if (cached_has_bits & 0x00000002u) {
      cols_ = from.cols_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Matrix::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Messages.Matrix)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Matrix::CopyFrom(const Matrix& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Messages.Matrix)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Matrix::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void Matrix::Swap(Matrix* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Matrix::InternalSwap(Matrix* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  stringdata_.InternalSwap(CastToBase(&other->stringdata_));
  intdata_.InternalSwap(&other->intdata_);
  doubledata_.InternalSwap(&other->doubledata_);
  swap(rows_, other->rows_);
  swap(cols_, other->cols_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Matrix::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Messages
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Messages::Matrix* Arena::CreateMaybeMessage< ::Messages::Matrix >(Arena* arena) {
  return Arena::CreateInternal< ::Messages::Matrix >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
