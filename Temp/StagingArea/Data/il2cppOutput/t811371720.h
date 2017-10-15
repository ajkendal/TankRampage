#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3870530982;
struct t1739457092;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t811371720  : public Il2CppObject
{
public:
	t3870530982 * f0;
	t1739457092 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t811371720, f0)); }
	inline t3870530982 * fg0() const { return f0; }
	inline t3870530982 ** fag0() { return &f0; }
	inline void fs0(t3870530982 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t811371720, f1)); }
	inline t1739457092 * fg1() const { return f1; }
	inline t1739457092 ** fag1() { return &f1; }
	inline void fs1(t1739457092 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
