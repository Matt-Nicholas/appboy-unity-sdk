﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1814;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.RSA
struct RSA_t1388;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1366;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1385;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
 void PKCS1__cctor_m8748 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
 bool PKCS1_Compare_m8749 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___array1, ByteU5BU5D_t97* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
 ByteU5BU5D_t97* PKCS1_I2OSP_m8750 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
 ByteU5BU5D_t97* PKCS1_OS2IP_m8751 (Object_t * __this/* static, unused */, ByteU5BU5D_t97* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t97* PKCS1_RSAEP_m8752 (Object_t * __this/* static, unused */, RSA_t1388 * ___rsa, ByteU5BU5D_t97* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t97* PKCS1_RSASP1_m8753 (Object_t * __this/* static, unused */, RSA_t1388 * ___rsa, ByteU5BU5D_t97* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t97* PKCS1_RSAVP1_m8754 (Object_t * __this/* static, unused */, RSA_t1388 * ___rsa, ByteU5BU5D_t97* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
 ByteU5BU5D_t97* PKCS1_Encrypt_v15_m8755 (Object_t * __this/* static, unused */, RSA_t1388 * ___rsa, RandomNumberGenerator_t1366 * ___rng, ByteU5BU5D_t97* ___M, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
 ByteU5BU5D_t97* PKCS1_Sign_v15_m8756 (Object_t * __this/* static, unused */, RSA_t1388 * ___rsa, HashAlgorithm_t1385 * ___hash, ByteU5BU5D_t97* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
 bool PKCS1_Verify_v15_m8757 (Object_t * __this/* static, unused */, RSA_t1388 * ___rsa, HashAlgorithm_t1385 * ___hash, ByteU5BU5D_t97* ___hashValue, ByteU5BU5D_t97* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
 bool PKCS1_Verify_v15_m8758 (Object_t * __this/* static, unused */, RSA_t1388 * ___rsa, HashAlgorithm_t1385 * ___hash, ByteU5BU5D_t97* ___hashValue, ByteU5BU5D_t97* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
 ByteU5BU5D_t97* PKCS1_Encode_v15_m8759 (Object_t * __this/* static, unused */, HashAlgorithm_t1385 * ___hash, ByteU5BU5D_t97* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
