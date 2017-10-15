#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2798266161;

#include "t4028081426.h"
#include "t465617797.h"
#include "t465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t317570005 
{
public:
	t465617797  f0;
	t465617797  f1;
	int32_t f2;
	float f3;
	t465617798  f4;
	t2798266161 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t317570005, f0)); }
	inline t465617797  fg0() const { return f0; }
	inline t465617797 * fag0() { return &f0; }
	inline void fs0(t465617797  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t317570005, f1)); }
	inline t465617797  fg1() const { return f1; }
	inline t465617797 * fag1() { return &f1; }
	inline void fs1(t465617797  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t317570005, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t317570005, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t317570005, f4)); }
	inline t465617798  fg4() const { return f4; }
	inline t465617798 * fag4() { return &f4; }
	inline void fs4(t465617798  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t317570005, f5)); }
	inline t2798266161 * fg5() const { return f5; }
	inline t2798266161 ** fag5() { return &f5; }
	inline void fs5(t2798266161 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
