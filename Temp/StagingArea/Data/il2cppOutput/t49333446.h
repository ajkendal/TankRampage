#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct MethodInfo_t;
struct t4201345270;

#include "Il2CppObject.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t49333446  : public Il2CppObject
{
public:
	methodPointerType f0;
	IntPtr_t f1;
	Il2CppObject * f2;
	IntPtr_t f3;
	IntPtr_t f4;
	IntPtr_t f5;
	MethodInfo_t * f6;
	MethodInfo_t * f7;
	t4201345270 * f8;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t49333446, f0)); }
	inline methodPointerType fg0() const { return f0; }
	inline methodPointerType* fag0() { return &f0; }
	inline void fs0(methodPointerType value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t49333446, f1)); }
	inline IntPtr_t fg1() const { return f1; }
	inline IntPtr_t* fag1() { return &f1; }
	inline void fs1(IntPtr_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t49333446, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t49333446, f3)); }
	inline IntPtr_t fg3() const { return f3; }
	inline IntPtr_t* fag3() { return &f3; }
	inline void fs3(IntPtr_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t49333446, f4)); }
	inline IntPtr_t fg4() const { return f4; }
	inline IntPtr_t* fag4() { return &f4; }
	inline void fs4(IntPtr_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t49333446, f5)); }
	inline IntPtr_t fg5() const { return f5; }
	inline IntPtr_t* fag5() { return &f5; }
	inline void fs5(IntPtr_t value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t49333446, f6)); }
	inline MethodInfo_t * fg6() const { return f6; }
	inline MethodInfo_t ** fag6() { return &f6; }
	inline void fs6(MethodInfo_t * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t49333446, f7)); }
	inline MethodInfo_t * fg7() const { return f7; }
	inline MethodInfo_t ** fag7() { return &f7; }
	inline void fs7(MethodInfo_t * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t49333446, f8)); }
	inline t4201345270 * fg8() const { return f8; }
	inline t4201345270 ** fag8() { return &f8; }
	inline void fs8(t4201345270 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
