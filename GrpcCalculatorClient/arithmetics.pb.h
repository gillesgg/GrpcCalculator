// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: arithmetics.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_arithmetics_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_arithmetics_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_arithmetics_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_arithmetics_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_arithmetics_2eproto;
namespace arithmetics {
class OneValueReply;
class OneValueReplyDefaultTypeInternal;
extern OneValueReplyDefaultTypeInternal _OneValueReply_default_instance_;
class TwoValueRequest;
class TwoValueRequestDefaultTypeInternal;
extern TwoValueRequestDefaultTypeInternal _TwoValueRequest_default_instance_;
}  // namespace arithmetics
PROTOBUF_NAMESPACE_OPEN
template<> ::arithmetics::OneValueReply* Arena::CreateMaybeMessage<::arithmetics::OneValueReply>(Arena*);
template<> ::arithmetics::TwoValueRequest* Arena::CreateMaybeMessage<::arithmetics::TwoValueRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace arithmetics {

// ===================================================================

class TwoValueRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:arithmetics.TwoValueRequest) */ {
 public:
  inline TwoValueRequest() : TwoValueRequest(nullptr) {}
  virtual ~TwoValueRequest();

  TwoValueRequest(const TwoValueRequest& from);
  TwoValueRequest(TwoValueRequest&& from) noexcept
    : TwoValueRequest() {
    *this = ::std::move(from);
  }

  inline TwoValueRequest& operator=(const TwoValueRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline TwoValueRequest& operator=(TwoValueRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TwoValueRequest& default_instance();

  static inline const TwoValueRequest* internal_default_instance() {
    return reinterpret_cast<const TwoValueRequest*>(
               &_TwoValueRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TwoValueRequest& a, TwoValueRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(TwoValueRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TwoValueRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TwoValueRequest* New() const final {
    return CreateMaybeMessage<TwoValueRequest>(nullptr);
  }

  TwoValueRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TwoValueRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TwoValueRequest& from);
  void MergeFrom(const TwoValueRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TwoValueRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "arithmetics.TwoValueRequest";
  }
  protected:
  explicit TwoValueRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_arithmetics_2eproto);
    return ::descriptor_table_arithmetics_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kBFieldNumber = 2,
  };
  // int32 a = 1;
  void clear_a();
  ::PROTOBUF_NAMESPACE_ID::int32 a() const;
  void set_a(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_a() const;
  void _internal_set_a(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 b = 2;
  void clear_b();
  ::PROTOBUF_NAMESPACE_ID::int32 b() const;
  void set_b(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_b() const;
  void _internal_set_b(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:arithmetics.TwoValueRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 a_;
  ::PROTOBUF_NAMESPACE_ID::int32 b_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_arithmetics_2eproto;
};
// -------------------------------------------------------------------

class OneValueReply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:arithmetics.OneValueReply) */ {
 public:
  inline OneValueReply() : OneValueReply(nullptr) {}
  virtual ~OneValueReply();

  OneValueReply(const OneValueReply& from);
  OneValueReply(OneValueReply&& from) noexcept
    : OneValueReply() {
    *this = ::std::move(from);
  }

  inline OneValueReply& operator=(const OneValueReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline OneValueReply& operator=(OneValueReply&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const OneValueReply& default_instance();

  static inline const OneValueReply* internal_default_instance() {
    return reinterpret_cast<const OneValueReply*>(
               &_OneValueReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(OneValueReply& a, OneValueReply& b) {
    a.Swap(&b);
  }
  inline void Swap(OneValueReply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(OneValueReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OneValueReply* New() const final {
    return CreateMaybeMessage<OneValueReply>(nullptr);
  }

  OneValueReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OneValueReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const OneValueReply& from);
  void MergeFrom(const OneValueReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(OneValueReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "arithmetics.OneValueReply";
  }
  protected:
  explicit OneValueReply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_arithmetics_2eproto);
    return ::descriptor_table_arithmetics_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCFieldNumber = 1,
  };
  // int32 c = 1;
  void clear_c();
  ::PROTOBUF_NAMESPACE_ID::int32 c() const;
  void set_c(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_c() const;
  void _internal_set_c(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:arithmetics.OneValueReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 c_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_arithmetics_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TwoValueRequest

// int32 a = 1;
inline void TwoValueRequest::clear_a() {
  a_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TwoValueRequest::_internal_a() const {
  return a_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TwoValueRequest::a() const {
  // @@protoc_insertion_point(field_get:arithmetics.TwoValueRequest.a)
  return _internal_a();
}
inline void TwoValueRequest::_internal_set_a(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  a_ = value;
}
inline void TwoValueRequest::set_a(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:arithmetics.TwoValueRequest.a)
}

// int32 b = 2;
inline void TwoValueRequest::clear_b() {
  b_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TwoValueRequest::_internal_b() const {
  return b_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TwoValueRequest::b() const {
  // @@protoc_insertion_point(field_get:arithmetics.TwoValueRequest.b)
  return _internal_b();
}
inline void TwoValueRequest::_internal_set_b(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  b_ = value;
}
inline void TwoValueRequest::set_b(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:arithmetics.TwoValueRequest.b)
}

// -------------------------------------------------------------------

// OneValueReply

// int32 c = 1;
inline void OneValueReply::clear_c() {
  c_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OneValueReply::_internal_c() const {
  return c_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OneValueReply::c() const {
  // @@protoc_insertion_point(field_get:arithmetics.OneValueReply.c)
  return _internal_c();
}
inline void OneValueReply::_internal_set_c(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  c_ = value;
}
inline void OneValueReply::set_c(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_c(value);
  // @@protoc_insertion_point(field_set:arithmetics.OneValueReply.c)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace arithmetics

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_arithmetics_2eproto
