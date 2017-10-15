#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2125916575;

#include "t3566053706.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2676985787  : public t3566053706
{
public:
	t2125916575 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2676985787, f2)); }
	inline t2125916575 * fg2() const { return f2; }
	inline t2125916575 ** fag2() { return &f2; }
	inline void fs2(t2125916575 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
