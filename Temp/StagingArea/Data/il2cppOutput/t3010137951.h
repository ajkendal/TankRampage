#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"
#include "t2250949164.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3010137951 
{
public:
	t2250949164  f0;
	t2250949164  f1;
	t2250949164  f2;
	t2250949164  f3;
	float f4;
	float f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3010137951, f0)); }
	inline t2250949164  fg0() const { return f0; }
	inline t2250949164 * fag0() { return &f0; }
	inline void fs0(t2250949164  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3010137951, f1)); }
	inline t2250949164  fg1() const { return f1; }
	inline t2250949164 * fag1() { return &f1; }
	inline void fs1(t2250949164  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3010137951, f2)); }
	inline t2250949164  fg2() const { return f2; }
	inline t2250949164 * fag2() { return &f2; }
	inline void fs2(t2250949164  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3010137951, f3)); }
	inline t2250949164  fg3() const { return f3; }
	inline t2250949164 * fag3() { return &f3; }
	inline void fs3(t2250949164  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3010137951, f4)); }
	inline float fg4() const { return f4; }
	inline float* fag4() { return &f4; }
	inline void fs4(float value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3010137951, f5)); }
	inline float fg5() const { return f5; }
	inline float* fag5() { return &f5; }
	inline void fs5(float value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.UI.ColorBlock
struct t3010137951_marshaled
{
	t2250949164_marshaled f0;
	t2250949164_marshaled f1;
	t2250949164_marshaled f2;
	t2250949164_marshaled f3;
	float f4;
	float f5;
};
