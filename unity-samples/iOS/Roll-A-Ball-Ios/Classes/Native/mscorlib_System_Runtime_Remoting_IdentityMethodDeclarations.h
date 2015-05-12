﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Identity
struct Identity_t2080;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1121;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2078;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
 void Identity__ctor_m10383 (Identity_t2080 * __this, String_t* ___objectUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type)
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
 Object_t * Identity_get_ChannelSink_m10384 (Identity_t2080 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
 void Identity_set_ChannelSink_m10385 (Identity_t2080 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
 String_t* Identity_get_ObjectUri_m10386 (Identity_t2080 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
 bool Identity_get_Disposed_m10387 (Identity_t2080 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
 void Identity_set_Disposed_m10388 (Identity_t2080 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
