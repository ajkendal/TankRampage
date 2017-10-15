#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t559747203;

#include "t1711298336.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3972326541  : public t1711298336
{
public:
	t559747203 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3972326541, f0)); }
	inline t559747203 * fg0() const { return f0; }
	inline t559747203 ** fag0() { return &f0; }
	inline void fs0(t559747203 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
