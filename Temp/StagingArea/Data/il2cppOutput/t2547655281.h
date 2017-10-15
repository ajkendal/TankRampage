#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1366199518;
struct t2805735124;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2547655281 
{
public:
	t1366199518 * f0;
	t2805735124 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2547655281, f0)); }
	inline t1366199518 * fg0() const { return f0; }
	inline t1366199518 ** fag0() { return &f0; }
	inline void fs0(t1366199518 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2547655281, f1)); }
	inline t2805735124 * fg1() const { return f1; }
	inline t2805735124 ** fag1() { return &f1; }
	inline void fs1(t2805735124 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
