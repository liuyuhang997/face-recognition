// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: my_proto.MsgCom.proto

#ifndef PROTOBUF_my_5fproto_2eMsgCom_2eproto__INCLUDED
#define PROTOBUF_my_5fproto_2eMsgCom_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_my_5fproto_2eMsgCom_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsMsgComImpl();
void InitDefaultsMsgCom();
inline void InitDefaults() {
  InitDefaultsMsgCom();
}
}  // namespace protobuf_my_5fproto_2eMsgCom_2eproto
namespace my_proto {
class MsgCom;
class MsgComDefaultTypeInternal;
extern MsgComDefaultTypeInternal _MsgCom_default_instance_;
}  // namespace my_proto
namespace my_proto {

// ===================================================================

class MsgCom : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:my_proto.MsgCom) */ {
 public:
  MsgCom();
  virtual ~MsgCom();

  MsgCom(const MsgCom& from);

  inline MsgCom& operator=(const MsgCom& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgCom(MsgCom&& from) noexcept
    : MsgCom() {
    *this = ::std::move(from);
  }

  inline MsgCom& operator=(MsgCom&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgCom& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsgCom* internal_default_instance() {
    return reinterpret_cast<const MsgCom*>(
               &_MsgCom_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MsgCom* other);
  friend void swap(MsgCom& a, MsgCom& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgCom* New() const PROTOBUF_FINAL { return New(NULL); }

  MsgCom* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MsgCom& from);
  void MergeFrom(const MsgCom& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MsgCom* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string id_name = 2;
  bool has_id_name() const;
  void clear_id_name();
  static const int kIdNameFieldNumber = 2;
  const ::std::string& id_name() const;
  void set_id_name(const ::std::string& value);
  #if LANG_CXX11
  void set_id_name(::std::string&& value);
  #endif
  void set_id_name(const char* value);
  void set_id_name(const char* value, size_t size);
  ::std::string* mutable_id_name();
  ::std::string* release_id_name();
  void set_allocated_id_name(::std::string* id_name);

  // optional string name_index = 3;
  bool has_name_index() const;
  void clear_name_index();
  static const int kNameIndexFieldNumber = 3;
  const ::std::string& name_index() const;
  void set_name_index(const ::std::string& value);
  #if LANG_CXX11
  void set_name_index(::std::string&& value);
  #endif
  void set_name_index(const char* value);
  void set_name_index(const char* value, size_t size);
  ::std::string* mutable_name_index();
  ::std::string* release_name_index();
  void set_allocated_name_index(::std::string* name_index);

  // optional string images_labels = 4;
  bool has_images_labels() const;
  void clear_images_labels();
  static const int kImagesLabelsFieldNumber = 4;
  const ::std::string& images_labels() const;
  void set_images_labels(const ::std::string& value);
  #if LANG_CXX11
  void set_images_labels(::std::string&& value);
  #endif
  void set_images_labels(const char* value);
  void set_images_labels(const char* value, size_t size);
  ::std::string* mutable_images_labels();
  ::std::string* release_images_labels();
  void set_allocated_images_labels(::std::string* images_labels);

  // optional string cascade_path = 5;
  bool has_cascade_path() const;
  void clear_cascade_path();
  static const int kCascadePathFieldNumber = 5;
  const ::std::string& cascade_path() const;
  void set_cascade_path(const ::std::string& value);
  #if LANG_CXX11
  void set_cascade_path(::std::string&& value);
  #endif
  void set_cascade_path(const char* value);
  void set_cascade_path(const char* value, size_t size);
  ::std::string* mutable_cascade_path();
  ::std::string* release_cascade_path();
  void set_allocated_cascade_path(::std::string* cascade_path);

  // required int32 num = 1;
  bool has_num() const;
  void clear_num();
  static const int kNumFieldNumber = 1;
  ::google::protobuf::int32 num() const;
  void set_num(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:my_proto.MsgCom)
 private:
  void set_has_num();
  void clear_has_num();
  void set_has_id_name();
  void clear_has_id_name();
  void set_has_name_index();
  void clear_has_name_index();
  void set_has_images_labels();
  void clear_has_images_labels();
  void set_has_cascade_path();
  void clear_has_cascade_path();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_name_;
  ::google::protobuf::internal::ArenaStringPtr name_index_;
  ::google::protobuf::internal::ArenaStringPtr images_labels_;
  ::google::protobuf::internal::ArenaStringPtr cascade_path_;
  ::google::protobuf::int32 num_;
  friend struct ::protobuf_my_5fproto_2eMsgCom_2eproto::TableStruct;
  friend void ::protobuf_my_5fproto_2eMsgCom_2eproto::InitDefaultsMsgComImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgCom

// required int32 num = 1;
inline bool MsgCom::has_num() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MsgCom::set_has_num() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MsgCom::clear_has_num() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MsgCom::clear_num() {
  num_ = 0;
  clear_has_num();
}
inline ::google::protobuf::int32 MsgCom::num() const {
  // @@protoc_insertion_point(field_get:my_proto.MsgCom.num)
  return num_;
}
inline void MsgCom::set_num(::google::protobuf::int32 value) {
  set_has_num();
  num_ = value;
  // @@protoc_insertion_point(field_set:my_proto.MsgCom.num)
}

// optional string id_name = 2;
inline bool MsgCom::has_id_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgCom::set_has_id_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgCom::clear_has_id_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgCom::clear_id_name() {
  id_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id_name();
}
inline const ::std::string& MsgCom::id_name() const {
  // @@protoc_insertion_point(field_get:my_proto.MsgCom.id_name)
  return id_name_.GetNoArena();
}
inline void MsgCom::set_id_name(const ::std::string& value) {
  set_has_id_name();
  id_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:my_proto.MsgCom.id_name)
}
#if LANG_CXX11
inline void MsgCom::set_id_name(::std::string&& value) {
  set_has_id_name();
  id_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:my_proto.MsgCom.id_name)
}
#endif
inline void MsgCom::set_id_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id_name();
  id_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:my_proto.MsgCom.id_name)
}
inline void MsgCom::set_id_name(const char* value, size_t size) {
  set_has_id_name();
  id_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:my_proto.MsgCom.id_name)
}
inline ::std::string* MsgCom::mutable_id_name() {
  set_has_id_name();
  // @@protoc_insertion_point(field_mutable:my_proto.MsgCom.id_name)
  return id_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgCom::release_id_name() {
  // @@protoc_insertion_point(field_release:my_proto.MsgCom.id_name)
  clear_has_id_name();
  return id_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgCom::set_allocated_id_name(::std::string* id_name) {
  if (id_name != NULL) {
    set_has_id_name();
  } else {
    clear_has_id_name();
  }
  id_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id_name);
  // @@protoc_insertion_point(field_set_allocated:my_proto.MsgCom.id_name)
}

// optional string name_index = 3;
inline bool MsgCom::has_name_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgCom::set_has_name_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgCom::clear_has_name_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgCom::clear_name_index() {
  name_index_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name_index();
}
inline const ::std::string& MsgCom::name_index() const {
  // @@protoc_insertion_point(field_get:my_proto.MsgCom.name_index)
  return name_index_.GetNoArena();
}
inline void MsgCom::set_name_index(const ::std::string& value) {
  set_has_name_index();
  name_index_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:my_proto.MsgCom.name_index)
}
#if LANG_CXX11
inline void MsgCom::set_name_index(::std::string&& value) {
  set_has_name_index();
  name_index_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:my_proto.MsgCom.name_index)
}
#endif
inline void MsgCom::set_name_index(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name_index();
  name_index_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:my_proto.MsgCom.name_index)
}
inline void MsgCom::set_name_index(const char* value, size_t size) {
  set_has_name_index();
  name_index_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:my_proto.MsgCom.name_index)
}
inline ::std::string* MsgCom::mutable_name_index() {
  set_has_name_index();
  // @@protoc_insertion_point(field_mutable:my_proto.MsgCom.name_index)
  return name_index_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgCom::release_name_index() {
  // @@protoc_insertion_point(field_release:my_proto.MsgCom.name_index)
  clear_has_name_index();
  return name_index_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgCom::set_allocated_name_index(::std::string* name_index) {
  if (name_index != NULL) {
    set_has_name_index();
  } else {
    clear_has_name_index();
  }
  name_index_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name_index);
  // @@protoc_insertion_point(field_set_allocated:my_proto.MsgCom.name_index)
}

// optional string images_labels = 4;
inline bool MsgCom::has_images_labels() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgCom::set_has_images_labels() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgCom::clear_has_images_labels() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgCom::clear_images_labels() {
  images_labels_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_images_labels();
}
inline const ::std::string& MsgCom::images_labels() const {
  // @@protoc_insertion_point(field_get:my_proto.MsgCom.images_labels)
  return images_labels_.GetNoArena();
}
inline void MsgCom::set_images_labels(const ::std::string& value) {
  set_has_images_labels();
  images_labels_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:my_proto.MsgCom.images_labels)
}
#if LANG_CXX11
inline void MsgCom::set_images_labels(::std::string&& value) {
  set_has_images_labels();
  images_labels_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:my_proto.MsgCom.images_labels)
}
#endif
inline void MsgCom::set_images_labels(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_images_labels();
  images_labels_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:my_proto.MsgCom.images_labels)
}
inline void MsgCom::set_images_labels(const char* value, size_t size) {
  set_has_images_labels();
  images_labels_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:my_proto.MsgCom.images_labels)
}
inline ::std::string* MsgCom::mutable_images_labels() {
  set_has_images_labels();
  // @@protoc_insertion_point(field_mutable:my_proto.MsgCom.images_labels)
  return images_labels_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgCom::release_images_labels() {
  // @@protoc_insertion_point(field_release:my_proto.MsgCom.images_labels)
  clear_has_images_labels();
  return images_labels_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgCom::set_allocated_images_labels(::std::string* images_labels) {
  if (images_labels != NULL) {
    set_has_images_labels();
  } else {
    clear_has_images_labels();
  }
  images_labels_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), images_labels);
  // @@protoc_insertion_point(field_set_allocated:my_proto.MsgCom.images_labels)
}

// optional string cascade_path = 5;
inline bool MsgCom::has_cascade_path() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MsgCom::set_has_cascade_path() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MsgCom::clear_has_cascade_path() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MsgCom::clear_cascade_path() {
  cascade_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_cascade_path();
}
inline const ::std::string& MsgCom::cascade_path() const {
  // @@protoc_insertion_point(field_get:my_proto.MsgCom.cascade_path)
  return cascade_path_.GetNoArena();
}
inline void MsgCom::set_cascade_path(const ::std::string& value) {
  set_has_cascade_path();
  cascade_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:my_proto.MsgCom.cascade_path)
}
#if LANG_CXX11
inline void MsgCom::set_cascade_path(::std::string&& value) {
  set_has_cascade_path();
  cascade_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:my_proto.MsgCom.cascade_path)
}
#endif
inline void MsgCom::set_cascade_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_cascade_path();
  cascade_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:my_proto.MsgCom.cascade_path)
}
inline void MsgCom::set_cascade_path(const char* value, size_t size) {
  set_has_cascade_path();
  cascade_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:my_proto.MsgCom.cascade_path)
}
inline ::std::string* MsgCom::mutable_cascade_path() {
  set_has_cascade_path();
  // @@protoc_insertion_point(field_mutable:my_proto.MsgCom.cascade_path)
  return cascade_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgCom::release_cascade_path() {
  // @@protoc_insertion_point(field_release:my_proto.MsgCom.cascade_path)
  clear_has_cascade_path();
  return cascade_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgCom::set_allocated_cascade_path(::std::string* cascade_path) {
  if (cascade_path != NULL) {
    set_has_cascade_path();
  } else {
    clear_has_cascade_path();
  }
  cascade_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cascade_path);
  // @@protoc_insertion_point(field_set_allocated:my_proto.MsgCom.cascade_path)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace my_proto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_my_5fproto_2eMsgCom_2eproto__INCLUDED
