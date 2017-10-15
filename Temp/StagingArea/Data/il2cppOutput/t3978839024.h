#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t217973160;

#include "t1711298336.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3978839024  : public t1711298336
{
public:
	t217973160 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3978839024, f0)); }
	inline t217973160 * fg0() const { return f0; }
	inline t217973160 ** fag0() { return &f0; }
	inline void fs0(t217973160 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
