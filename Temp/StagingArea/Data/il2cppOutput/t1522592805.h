#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2777156203;
struct t4192248498;

#include "t1396831259.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1522592805  : public t1396831259
{
public:
	t2777156203 * f0;
	t4192248498 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1522592805, f0)); }
	inline t2777156203 * fg0() const { return f0; }
	inline t2777156203 ** fag0() { return &f0; }
	inline void fs0(t2777156203 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1522592805, f1)); }
	inline t4192248498 * fg1() const { return f1; }
	inline t4192248498 ** fag1() { return &f1; }
	inline void fs1(t4192248498 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
