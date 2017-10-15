#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t421662367;

#include "t4028081426.h"
#include "t2250949164.h"
#include "t1480632349.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t991796546 
{
public:
	t421662367 * f0;
	t2250949164  f1;
	t2250949164  f2;
	int32_t f3;
	float f4;
	bool f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t991796546, f0)); }
	inline t421662367 * fg0() const { return f0; }
	inline t421662367 ** fag0() { return &f0; }
	inline void fs0(t421662367 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t991796546, f1)); }
	inline t2250949164  fg1() const { return f1; }
	inline t2250949164 * fag1() { return &f1; }
	inline void fs1(t2250949164  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t991796546, f2)); }
	inline t2250949164  fg2() const { return f2; }
	inline t2250949164 * fag2() { return &f2; }
	inline void fs2(t2250949164  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t991796546, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t991796546, f4)); }
	inline float fg4() const { return f4; }
	inline float* fag4() { return &f4; }
	inline void fs4(float value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t991796546, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
