#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1312997718;
struct Il2CppObject;
struct String_t;

#include "Il2CppObject.h"
#include "t2450578873.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3188879106  : public Il2CppObject
{
public:
	t1312997718 * f0;
	int32_t f1;
	int32_t f2;
	int32_t f3;
	int32_t f4;
	Il2CppObject * f5;
	Il2CppObject * f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3188879106, f0)); }
	inline t1312997718 * fg0() const { return f0; }
	inline t1312997718 ** fag0() { return &f0; }
	inline void fs0(t1312997718 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3188879106, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3188879106, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3188879106, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3188879106, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3188879106, f5)); }
	inline Il2CppObject * fg5() const { return f5; }
	inline Il2CppObject ** fag5() { return &f5; }
	inline void fs5(Il2CppObject * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3188879106, f6)); }
	inline Il2CppObject * fg6() const { return f6; }
	inline Il2CppObject ** fag6() { return &f6; }
	inline void fs6(Il2CppObject * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

struct t3188879106_SFs
{
public:
	String_t* f7;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3188879106_SFs, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
