#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3339896708;
struct t1584101357;
struct t3192529782;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3339896708  : public Il2CppObject
{
public:
	t1584101357 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3339896708, f1)); }
	inline t1584101357 * fg1() const { return f1; }
	inline t1584101357 ** fag1() { return &f1; }
	inline void fs1(t1584101357 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t3339896708_SFs
{
public:
	t3339896708 * f0;
	t3192529782 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3339896708_SFs, f0)); }
	inline t3339896708 * fg0() const { return f0; }
	inline t3339896708 ** fag0() { return &f0; }
	inline void fs0(t3339896708 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3339896708_SFs, f2)); }
	inline t3192529782 * fg2() const { return f2; }
	inline t3192529782 ** fag2() { return &f2; }
	inline void fs2(t3192529782 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
