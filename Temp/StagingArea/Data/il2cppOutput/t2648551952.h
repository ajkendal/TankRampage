#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;

#include "Il2CppObject.h"
#include "t991796546.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2648551952  : public Il2CppObject
{
public:
	t991796546  f0;
	float f1;
	float f2;
	int32_t f3;
	Il2CppObject * f4;
	t991796546  f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2648551952, f0)); }
	inline t991796546  fg0() const { return f0; }
	inline t991796546 * fag0() { return &f0; }
	inline void fs0(t991796546  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2648551952, f1)); }
	inline float fg1() const { return f1; }
	inline float* fag1() { return &f1; }
	inline void fs1(float value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2648551952, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2648551952, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2648551952, f4)); }
	inline Il2CppObject * fg4() const { return f4; }
	inline Il2CppObject ** fag4() { return &f4; }
	inline void fs4(Il2CppObject * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2648551952, f5)); }
	inline t991796546  fg5() const { return f5; }
	inline t991796546 * fag5() { return &f5; }
	inline void fs5(t991796546  value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
