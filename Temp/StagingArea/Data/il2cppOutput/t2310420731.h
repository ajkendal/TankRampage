#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3925292378;

#include "t3499842314.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2310420731  : public t3499842314
{
public:
	t3925292378 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2310420731, f0)); }
	inline t3925292378 * fg0() const { return f0; }
	inline t3925292378 ** fag0() { return &f0; }
	inline void fs0(t3925292378 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
