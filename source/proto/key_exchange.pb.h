// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: key_exchange.proto

#ifndef PROTOBUF_key_5fexchange_2eproto__INCLUDED
#define PROTOBUF_key_5fexchange_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class HelloMessage;
class HelloMessageDefaultTypeInternal;
extern HelloMessageDefaultTypeInternal _HelloMessage_default_instance_;
}  // namespace proto
}  // namespace aspia

namespace aspia {
namespace proto {

namespace protobuf_key_5fexchange_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_key_5fexchange_2eproto

// ===================================================================

class HelloMessage : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.HelloMessage) */ {
 public:
  HelloMessage();
  virtual ~HelloMessage();

  HelloMessage(const HelloMessage& from);

  inline HelloMessage& operator=(const HelloMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const HelloMessage& default_instance();

  static inline const HelloMessage* internal_default_instance() {
    return reinterpret_cast<const HelloMessage*>(
               &_HelloMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HelloMessage* other);

  // implements Message ----------------------------------------------

  inline HelloMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  HelloMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const HelloMessage& from);
  void MergeFrom(const HelloMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HelloMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes public_key = 1;
  void clear_public_key();
  static const int kPublicKeyFieldNumber = 1;
  const ::std::string& public_key() const;
  void set_public_key(const ::std::string& value);
  #if LANG_CXX11
  void set_public_key(::std::string&& value);
  #endif
  void set_public_key(const char* value);
  void set_public_key(const void* value, size_t size);
  ::std::string* mutable_public_key();
  ::std::string* release_public_key();
  void set_allocated_public_key(::std::string* public_key);

  // bytes nonce = 2;
  void clear_nonce();
  static const int kNonceFieldNumber = 2;
  const ::std::string& nonce() const;
  void set_nonce(const ::std::string& value);
  #if LANG_CXX11
  void set_nonce(::std::string&& value);
  #endif
  void set_nonce(const char* value);
  void set_nonce(const void* value, size_t size);
  ::std::string* mutable_nonce();
  ::std::string* release_nonce();
  void set_allocated_nonce(::std::string* nonce);

  // @@protoc_insertion_point(class_scope:aspia.proto.HelloMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr public_key_;
  ::google::protobuf::internal::ArenaStringPtr nonce_;
  mutable int _cached_size_;
  friend struct protobuf_key_5fexchange_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HelloMessage

// bytes public_key = 1;
inline void HelloMessage::clear_public_key() {
  public_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HelloMessage::public_key() const {
  // @@protoc_insertion_point(field_get:aspia.proto.HelloMessage.public_key)
  return public_key_.GetNoArena();
}
inline void HelloMessage::set_public_key(const ::std::string& value) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.HelloMessage.public_key)
}
#if LANG_CXX11
inline void HelloMessage::set_public_key(::std::string&& value) {
  
  public_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.HelloMessage.public_key)
}
#endif
inline void HelloMessage::set_public_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.HelloMessage.public_key)
}
inline void HelloMessage::set_public_key(const void* value, size_t size) {
  
  public_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.HelloMessage.public_key)
}
inline ::std::string* HelloMessage::mutable_public_key() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.HelloMessage.public_key)
  return public_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HelloMessage::release_public_key() {
  // @@protoc_insertion_point(field_release:aspia.proto.HelloMessage.public_key)
  
  return public_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HelloMessage::set_allocated_public_key(::std::string* public_key) {
  if (public_key != NULL) {
    
  } else {
    
  }
  public_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), public_key);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.HelloMessage.public_key)
}

// bytes nonce = 2;
inline void HelloMessage::clear_nonce() {
  nonce_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& HelloMessage::nonce() const {
  // @@protoc_insertion_point(field_get:aspia.proto.HelloMessage.nonce)
  return nonce_.GetNoArena();
}
inline void HelloMessage::set_nonce(const ::std::string& value) {
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.HelloMessage.nonce)
}
#if LANG_CXX11
inline void HelloMessage::set_nonce(::std::string&& value) {
  
  nonce_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.HelloMessage.nonce)
}
#endif
inline void HelloMessage::set_nonce(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.HelloMessage.nonce)
}
inline void HelloMessage::set_nonce(const void* value, size_t size) {
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.HelloMessage.nonce)
}
inline ::std::string* HelloMessage::mutable_nonce() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.HelloMessage.nonce)
  return nonce_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HelloMessage::release_nonce() {
  // @@protoc_insertion_point(field_release:aspia.proto.HelloMessage.nonce)
  
  return nonce_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HelloMessage::set_allocated_nonce(::std::string* nonce) {
  if (nonce != NULL) {
    
  } else {
    
  }
  nonce_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nonce);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.HelloMessage.nonce)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_key_5fexchange_2eproto__INCLUDED