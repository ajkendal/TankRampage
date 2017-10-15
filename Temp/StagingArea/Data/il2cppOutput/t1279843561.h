#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1309267026;
struct Il2CppObject;
struct t2555726085;

#include "Il2CppObject.h"
#include "t465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1279843561  : public Il2CppObject
{
public:
	t1309267026 * f0;
	t465617798  f1;
	float f2;
	int32_t f3;
	Il2CppObject * f4;
	t1309267026 * f5;
	t2555726085 * f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1279843561, f0)); }
	inline t1309267026 * fg0() const { return f0; }
	inline t1309267026 ** fag0() { return &f0; }
	inline void fs0(t1309267026 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1279843561, f1)); }
	inline t465617798  fg1() const { return f1; }
	inline t465617798 * fag1() { return &f1; }
	inline void fs1(t465617798  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1279843561, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1279843561, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1279843561, f4)); }
	inline Il2CppObject * fg4() const { return f4; }
	inline Il2CppObject ** fag4() { return &f4; }
	inline void fs4(Il2CppObject * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1279843561, f5)); }
	inline t1309267026 * fg5() const { return f5; }
	inline t1309267026 ** fag5() { return &f5; }
	inline void fs5(t1309267026 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1279843561, f6)); }
	inline t2555726085 * fg6() const { return f6; }
	inline t2555726085 ** fag6() { return &f6; }
	inline void fs6(t2555726085 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
