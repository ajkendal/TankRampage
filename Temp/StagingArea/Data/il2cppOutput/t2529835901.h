#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"
#include "t465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2529835901 
{
public:
	t465617797  f0;
	t465617797  f1;
	t465617797  f2;
	float f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2529835901, f0)); }
	inline t465617797  fg0() const { return f0; }
	inline t465617797 * fag0() { return &f0; }
	inline void fs0(t465617797  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2529835901, f1)); }
	inline t465617797  fg1() const { return f1; }
	inline t465617797 * fag1() { return &f1; }
	inline void fs1(t465617797  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2529835901, f2)); }
	inline t465617797  fg2() const { return f2; }
	inline t465617797 * fag2() { return &f2; }
	inline void fs2(t465617797  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2529835901, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2529835901, f4)); }
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
// Native definition for marshalling of: UnityEngine.HumanLimit
struct t2529835901_marshaled
{
	t465617797_marshaled f0;
	t465617797_marshaled f1;
	t465617797_marshaled f2;
	float f3;
	int32_t f4;
};
