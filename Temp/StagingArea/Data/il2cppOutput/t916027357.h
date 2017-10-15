#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1118776648;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t916027357 
{
public:
	t1118776648 * f0;
	t1118776648 * f1;
	t1118776648 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t916027357, f0)); }
	inline t1118776648 * fg0() const { return f0; }
	inline t1118776648 ** fag0() { return &f0; }
	inline void fs0(t1118776648 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t916027357, f1)); }
	inline t1118776648 * fg1() const { return f1; }
	inline t1118776648 ** fag1() { return &f1; }
	inline void fs1(t1118776648 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t916027357, f2)); }
	inline t1118776648 * fg2() const { return f2; }
	inline t1118776648 ** fag2() { return &f2; }
	inline void fs2(t1118776648 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
