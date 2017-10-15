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
struct t3747200355;

#include "Il2CppObject.h"
#include "t465617798.h"
#include "t2553848979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t774164785  : public Il2CppObject
{
public:
	t1309267026 * f0;
	t465617798  f1;
	t2553848979  f2;
	float f3;
	int32_t f4;
	Il2CppObject * f5;
	t1309267026 * f6;
	t3747200355 * f7;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t774164785, f0)); }
	inline t1309267026 * fg0() const { return f0; }
	inline t1309267026 ** fag0() { return &f0; }
	inline void fs0(t1309267026 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t774164785, f1)); }
	inline t465617798  fg1() const { return f1; }
	inline t465617798 * fag1() { return &f1; }
	inline void fs1(t465617798  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t774164785, f2)); }
	inline t2553848979  fg2() const { return f2; }
	inline t2553848979 * fag2() { return &f2; }
	inline void fs2(t2553848979  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t774164785, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t774164785, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t774164785, f5)); }
	inline Il2CppObject * fg5() const { return f5; }
	inline Il2CppObject ** fag5() { return &f5; }
	inline void fs5(Il2CppObject * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t774164785, f6)); }
	inline t1309267026 * fg6() const { return f6; }
	inline t1309267026 ** fag6() { return &f6; }
	inline void fs6(t1309267026 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t774164785, f7)); }
	inline t3747200355 * fg7() const { return f7; }
	inline t3747200355 ** fag7() { return &f7; }
	inline void fs7(t3747200355 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
