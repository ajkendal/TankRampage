#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3753894607;

#include "t346534971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2491204935  : public t346534971
{
public:
	t3753894607 * f16;

public:
	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t2491204935, f16)); }
	inline t3753894607 * fg16() const { return f16; }
	inline t3753894607 ** fag16() { return &f16; }
	inline void fs16(t3753894607 * value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
