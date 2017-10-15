#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t702655132;
struct t486096470;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3566053706  : public Il2CppObject
{
public:
	t702655132 * f0;
	t486096470 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3566053706, f0)); }
	inline t702655132 * fg0() const { return f0; }
	inline t702655132 ** fag0() { return &f0; }
	inline void fs0(t702655132 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3566053706, f1)); }
	inline t486096470 * fg1() const { return f1; }
	inline t486096470 ** fag1() { return &f1; }
	inline void fs1(t486096470 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
