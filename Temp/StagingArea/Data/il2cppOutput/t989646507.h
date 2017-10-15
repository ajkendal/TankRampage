#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2623103667;
struct t3925292378;

#include "t1231813951.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t989646507  : public t1231813951
{
public:
	t2623103667 * f13;
	t2623103667 * f14;
	t3925292378 * f15;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t989646507, f13)); }
	inline t2623103667 * fg13() const { return f13; }
	inline t2623103667 ** fag13() { return &f13; }
	inline void fs13(t2623103667 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t989646507, f14)); }
	inline t2623103667 * fg14() const { return f14; }
	inline t2623103667 ** fag14() { return &f14; }
	inline void fs14(t2623103667 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t989646507, f15)); }
	inline t3925292378 * fg15() const { return f15; }
	inline t3925292378 ** fag15() { return &f15; }
	inline void fs15(t3925292378 * value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
