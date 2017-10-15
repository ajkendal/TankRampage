#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2777155605;

#include "t2957792450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1415961622  : public t2957792450
{
public:
	t2777155605 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1415961622, f0)); }
	inline t2777155605 * fg0() const { return f0; }
	inline t2777155605 ** fag0() { return &f0; }
	inline void fs0(t2777155605 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
