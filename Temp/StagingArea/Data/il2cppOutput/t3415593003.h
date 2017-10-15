#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3154594883;

#include "t4028081426.h"
#include "t4043223540.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3415593003 
{
public:
	t3154594883 * f0;
	int32_t f1;
	int32_t f2;
	t4043223540  f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3415593003, f0)); }
	inline t3154594883 * fg0() const { return f0; }
	inline t3154594883 ** fag0() { return &f0; }
	inline void fs0(t3154594883 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3415593003, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3415593003, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3415593003, f3)); }
	inline t4043223540  fg3() const { return f3; }
	inline t4043223540 * fag3() { return &f3; }
	inline void fs3(t4043223540  value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
