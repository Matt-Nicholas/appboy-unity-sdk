﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t481;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t502;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t457;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_17MethodDeclarations.h"
#define EventFunction_1__ctor_m3243(__this, ___object, ___method, method) (void)EventFunction_1__ctor_m17530_gshared((EventFunction_1_t3517 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m18434(__this, ___handler, ___eventData, method) (void)EventFunction_1_Invoke_m17532_gshared((EventFunction_1_t3517 *)__this, (Object_t *)___handler, (BaseEventData_t457 *)___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m18435(__this, ___handler, ___eventData, ___callback, ___object, method) (Object_t *)EventFunction_1_BeginInvoke_m17534_gshared((EventFunction_1_t3517 *)__this, (Object_t *)___handler, (BaseEventData_t457 *)___eventData, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m18436(__this, ___result, method) (void)EventFunction_1_EndInvoke_m17536_gshared((EventFunction_1_t3517 *)__this, (Object_t *)___result, method)
