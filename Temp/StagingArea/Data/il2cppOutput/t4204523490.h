#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct String_t;
struct MethodInfo_t;

#include "t4028081426.h"
#include "t2970087148.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4204523490 
{
public:
	Type_t * f0;
	String_t* f1;
	MethodInfo_t * f2;
	MethodInfo_t * f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4204523490, f0)); }
	inline Type_t * fg0() const { return f0; }
	inline Type_t ** fag0() { return &f0; }
	inline void fs0(Type_t * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4204523490, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4204523490, f2)); }
	inline MethodInfo_t * fg2() const { return f2; }
	inline MethodInfo_t ** fag2() { return &f2; }
	inline void fs2(MethodInfo_t * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4204523490, f3)); }
	inline MethodInfo_t * fg3() const { return f3; }
	inline MethodInfo_t ** fag3() { return &f3; }
	inline void fs3(MethodInfo_t * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4204523490, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
