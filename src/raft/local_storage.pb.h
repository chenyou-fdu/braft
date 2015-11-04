// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft/local_storage.proto

#ifndef PROTOBUF_raft_2flocal_5fstorage_2eproto__INCLUDED
#define PROTOBUF_raft_2flocal_5fstorage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "raft/raft.pb.h"
// @@protoc_insertion_point(includes)

namespace raft {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();
void protobuf_AssignDesc_raft_2flocal_5fstorage_2eproto();
void protobuf_ShutdownFile_raft_2flocal_5fstorage_2eproto();

class ConfigurationPBMeta;
class LogPBMeta;
class StablePBMeta;
class SnapshotPBMeta;

// ===================================================================

class ConfigurationPBMeta : public ::google::protobuf::Message {
 public:
  ConfigurationPBMeta();
  virtual ~ConfigurationPBMeta();
  
  ConfigurationPBMeta(const ConfigurationPBMeta& from);
  
  inline ConfigurationPBMeta& operator=(const ConfigurationPBMeta& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ConfigurationPBMeta& default_instance();
  
  void Swap(ConfigurationPBMeta* other);
  
  // implements Message ----------------------------------------------
  
  ConfigurationPBMeta* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConfigurationPBMeta& from);
  void MergeFrom(const ConfigurationPBMeta& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated string peers = 1;
  inline int peers_size() const;
  inline void clear_peers();
  static const int kPeersFieldNumber = 1;
  inline const ::std::string& peers(int index) const;
  inline ::std::string* mutable_peers(int index);
  inline void set_peers(int index, const ::std::string& value);
  inline void set_peers(int index, const char* value);
  inline void set_peers(int index, const char* value, size_t size);
  inline ::std::string* add_peers();
  inline void add_peers(const ::std::string& value);
  inline void add_peers(const char* value);
  inline void add_peers(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& peers() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_peers();
  
  // @@protoc_insertion_point(class_scope:raft.ConfigurationPBMeta)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::std::string> peers_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();
  friend void protobuf_AssignDesc_raft_2flocal_5fstorage_2eproto();
  friend void protobuf_ShutdownFile_raft_2flocal_5fstorage_2eproto();
  
  void InitAsDefaultInstance();
  static ConfigurationPBMeta* default_instance_;
};
// -------------------------------------------------------------------

class LogPBMeta : public ::google::protobuf::Message {
 public:
  LogPBMeta();
  virtual ~LogPBMeta();
  
  LogPBMeta(const LogPBMeta& from);
  
  inline LogPBMeta& operator=(const LogPBMeta& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const LogPBMeta& default_instance();
  
  void Swap(LogPBMeta* other);
  
  // implements Message ----------------------------------------------
  
  LogPBMeta* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogPBMeta& from);
  void MergeFrom(const LogPBMeta& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int64 start_log_index = 1;
  inline bool has_start_log_index() const;
  inline void clear_start_log_index();
  static const int kStartLogIndexFieldNumber = 1;
  inline ::google::protobuf::int64 start_log_index() const;
  inline void set_start_log_index(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:raft.LogPBMeta)
 private:
  inline void set_has_start_log_index();
  inline void clear_has_start_log_index();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int64 start_log_index_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();
  friend void protobuf_AssignDesc_raft_2flocal_5fstorage_2eproto();
  friend void protobuf_ShutdownFile_raft_2flocal_5fstorage_2eproto();
  
  void InitAsDefaultInstance();
  static LogPBMeta* default_instance_;
};
// -------------------------------------------------------------------

class StablePBMeta : public ::google::protobuf::Message {
 public:
  StablePBMeta();
  virtual ~StablePBMeta();
  
  StablePBMeta(const StablePBMeta& from);
  
  inline StablePBMeta& operator=(const StablePBMeta& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const StablePBMeta& default_instance();
  
  void Swap(StablePBMeta* other);
  
  // implements Message ----------------------------------------------
  
  StablePBMeta* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StablePBMeta& from);
  void MergeFrom(const StablePBMeta& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int64 term = 1;
  inline bool has_term() const;
  inline void clear_term();
  static const int kTermFieldNumber = 1;
  inline ::google::protobuf::int64 term() const;
  inline void set_term(::google::protobuf::int64 value);
  
  // required string votedfor = 2;
  inline bool has_votedfor() const;
  inline void clear_votedfor();
  static const int kVotedforFieldNumber = 2;
  inline const ::std::string& votedfor() const;
  inline void set_votedfor(const ::std::string& value);
  inline void set_votedfor(const char* value);
  inline void set_votedfor(const char* value, size_t size);
  inline ::std::string* mutable_votedfor();
  inline ::std::string* release_votedfor();
  
  // @@protoc_insertion_point(class_scope:raft.StablePBMeta)
 private:
  inline void set_has_term();
  inline void clear_has_term();
  inline void set_has_votedfor();
  inline void clear_has_votedfor();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int64 term_;
  ::std::string* votedfor_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();
  friend void protobuf_AssignDesc_raft_2flocal_5fstorage_2eproto();
  friend void protobuf_ShutdownFile_raft_2flocal_5fstorage_2eproto();
  
  void InitAsDefaultInstance();
  static StablePBMeta* default_instance_;
};
// -------------------------------------------------------------------

class SnapshotPBMeta : public ::google::protobuf::Message {
 public:
  SnapshotPBMeta();
  virtual ~SnapshotPBMeta();
  
  SnapshotPBMeta(const SnapshotPBMeta& from);
  
  inline SnapshotPBMeta& operator=(const SnapshotPBMeta& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SnapshotPBMeta& default_instance();
  
  void Swap(SnapshotPBMeta* other);
  
  // implements Message ----------------------------------------------
  
  SnapshotPBMeta* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SnapshotPBMeta& from);
  void MergeFrom(const SnapshotPBMeta& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int64 last_included_term = 1;
  inline bool has_last_included_term() const;
  inline void clear_last_included_term();
  static const int kLastIncludedTermFieldNumber = 1;
  inline ::google::protobuf::int64 last_included_term() const;
  inline void set_last_included_term(::google::protobuf::int64 value);
  
  // required int64 last_included_index = 2;
  inline bool has_last_included_index() const;
  inline void clear_last_included_index();
  static const int kLastIncludedIndexFieldNumber = 2;
  inline ::google::protobuf::int64 last_included_index() const;
  inline void set_last_included_index(::google::protobuf::int64 value);
  
  // repeated string peers = 3;
  inline int peers_size() const;
  inline void clear_peers();
  static const int kPeersFieldNumber = 3;
  inline const ::std::string& peers(int index) const;
  inline ::std::string* mutable_peers(int index);
  inline void set_peers(int index, const ::std::string& value);
  inline void set_peers(int index, const char* value);
  inline void set_peers(int index, const char* value, size_t size);
  inline ::std::string* add_peers();
  inline void add_peers(const ::std::string& value);
  inline void add_peers(const char* value);
  inline void add_peers(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& peers() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_peers();
  
  // @@protoc_insertion_point(class_scope:raft.SnapshotPBMeta)
 private:
  inline void set_has_last_included_term();
  inline void clear_has_last_included_term();
  inline void set_has_last_included_index();
  inline void clear_has_last_included_index();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int64 last_included_term_;
  ::google::protobuf::int64 last_included_index_;
  ::google::protobuf::RepeatedPtrField< ::std::string> peers_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_raft_2flocal_5fstorage_2eproto();
  friend void protobuf_AssignDesc_raft_2flocal_5fstorage_2eproto();
  friend void protobuf_ShutdownFile_raft_2flocal_5fstorage_2eproto();
  
  void InitAsDefaultInstance();
  static SnapshotPBMeta* default_instance_;
};
// ===================================================================


// ===================================================================

// ConfigurationPBMeta

// repeated string peers = 1;
inline int ConfigurationPBMeta::peers_size() const {
  return peers_.size();
}
inline void ConfigurationPBMeta::clear_peers() {
  peers_.Clear();
}
inline const ::std::string& ConfigurationPBMeta::peers(int index) const {
  return peers_.Get(index);
}
inline ::std::string* ConfigurationPBMeta::mutable_peers(int index) {
  return peers_.Mutable(index);
}
inline void ConfigurationPBMeta::set_peers(int index, const ::std::string& value) {
  peers_.Mutable(index)->assign(value);
}
inline void ConfigurationPBMeta::set_peers(int index, const char* value) {
  peers_.Mutable(index)->assign(value);
}
inline void ConfigurationPBMeta::set_peers(int index, const char* value, size_t size) {
  peers_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConfigurationPBMeta::add_peers() {
  return peers_.Add();
}
inline void ConfigurationPBMeta::add_peers(const ::std::string& value) {
  peers_.Add()->assign(value);
}
inline void ConfigurationPBMeta::add_peers(const char* value) {
  peers_.Add()->assign(value);
}
inline void ConfigurationPBMeta::add_peers(const char* value, size_t size) {
  peers_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ConfigurationPBMeta::peers() const {
  return peers_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ConfigurationPBMeta::mutable_peers() {
  return &peers_;
}

// -------------------------------------------------------------------

// LogPBMeta

// required int64 start_log_index = 1;
inline bool LogPBMeta::has_start_log_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogPBMeta::set_has_start_log_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogPBMeta::clear_has_start_log_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogPBMeta::clear_start_log_index() {
  start_log_index_ = GOOGLE_LONGLONG(0);
  clear_has_start_log_index();
}
inline ::google::protobuf::int64 LogPBMeta::start_log_index() const {
  return start_log_index_;
}
inline void LogPBMeta::set_start_log_index(::google::protobuf::int64 value) {
  set_has_start_log_index();
  start_log_index_ = value;
}

// -------------------------------------------------------------------

// StablePBMeta

// required int64 term = 1;
inline bool StablePBMeta::has_term() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StablePBMeta::set_has_term() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StablePBMeta::clear_has_term() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StablePBMeta::clear_term() {
  term_ = GOOGLE_LONGLONG(0);
  clear_has_term();
}
inline ::google::protobuf::int64 StablePBMeta::term() const {
  return term_;
}
inline void StablePBMeta::set_term(::google::protobuf::int64 value) {
  set_has_term();
  term_ = value;
}

// required string votedfor = 2;
inline bool StablePBMeta::has_votedfor() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StablePBMeta::set_has_votedfor() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StablePBMeta::clear_has_votedfor() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StablePBMeta::clear_votedfor() {
  if (votedfor_ != &::google::protobuf::internal::kEmptyString) {
    votedfor_->clear();
  }
  clear_has_votedfor();
}
inline const ::std::string& StablePBMeta::votedfor() const {
  return *votedfor_;
}
inline void StablePBMeta::set_votedfor(const ::std::string& value) {
  set_has_votedfor();
  if (votedfor_ == &::google::protobuf::internal::kEmptyString) {
    votedfor_ = new ::std::string;
  }
  votedfor_->assign(value);
}
inline void StablePBMeta::set_votedfor(const char* value) {
  set_has_votedfor();
  if (votedfor_ == &::google::protobuf::internal::kEmptyString) {
    votedfor_ = new ::std::string;
  }
  votedfor_->assign(value);
}
inline void StablePBMeta::set_votedfor(const char* value, size_t size) {
  set_has_votedfor();
  if (votedfor_ == &::google::protobuf::internal::kEmptyString) {
    votedfor_ = new ::std::string;
  }
  votedfor_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* StablePBMeta::mutable_votedfor() {
  set_has_votedfor();
  if (votedfor_ == &::google::protobuf::internal::kEmptyString) {
    votedfor_ = new ::std::string;
  }
  return votedfor_;
}
inline ::std::string* StablePBMeta::release_votedfor() {
  clear_has_votedfor();
  if (votedfor_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = votedfor_;
    votedfor_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// SnapshotPBMeta

// required int64 last_included_term = 1;
inline bool SnapshotPBMeta::has_last_included_term() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SnapshotPBMeta::set_has_last_included_term() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SnapshotPBMeta::clear_has_last_included_term() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SnapshotPBMeta::clear_last_included_term() {
  last_included_term_ = GOOGLE_LONGLONG(0);
  clear_has_last_included_term();
}
inline ::google::protobuf::int64 SnapshotPBMeta::last_included_term() const {
  return last_included_term_;
}
inline void SnapshotPBMeta::set_last_included_term(::google::protobuf::int64 value) {
  set_has_last_included_term();
  last_included_term_ = value;
}

// required int64 last_included_index = 2;
inline bool SnapshotPBMeta::has_last_included_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SnapshotPBMeta::set_has_last_included_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SnapshotPBMeta::clear_has_last_included_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SnapshotPBMeta::clear_last_included_index() {
  last_included_index_ = GOOGLE_LONGLONG(0);
  clear_has_last_included_index();
}
inline ::google::protobuf::int64 SnapshotPBMeta::last_included_index() const {
  return last_included_index_;
}
inline void SnapshotPBMeta::set_last_included_index(::google::protobuf::int64 value) {
  set_has_last_included_index();
  last_included_index_ = value;
}

// repeated string peers = 3;
inline int SnapshotPBMeta::peers_size() const {
  return peers_.size();
}
inline void SnapshotPBMeta::clear_peers() {
  peers_.Clear();
}
inline const ::std::string& SnapshotPBMeta::peers(int index) const {
  return peers_.Get(index);
}
inline ::std::string* SnapshotPBMeta::mutable_peers(int index) {
  return peers_.Mutable(index);
}
inline void SnapshotPBMeta::set_peers(int index, const ::std::string& value) {
  peers_.Mutable(index)->assign(value);
}
inline void SnapshotPBMeta::set_peers(int index, const char* value) {
  peers_.Mutable(index)->assign(value);
}
inline void SnapshotPBMeta::set_peers(int index, const char* value, size_t size) {
  peers_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SnapshotPBMeta::add_peers() {
  return peers_.Add();
}
inline void SnapshotPBMeta::add_peers(const ::std::string& value) {
  peers_.Add()->assign(value);
}
inline void SnapshotPBMeta::add_peers(const char* value) {
  peers_.Add()->assign(value);
}
inline void SnapshotPBMeta::add_peers(const char* value, size_t size) {
  peers_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
SnapshotPBMeta::peers() const {
  return peers_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
SnapshotPBMeta::mutable_peers() {
  return &peers_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace raft

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_raft_2flocal_5fstorage_2eproto__INCLUDED
