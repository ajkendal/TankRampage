#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1157533551;

#include "t3378505055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t20112255  : public t3378505055
{
public:
	t1157533551 * f9;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t20112255, f9)); }
	inline t1157533551 * fg9() const { return f9; }
	inline t1157533551 ** fag9() { return &f9; }
	inline void fs9(t1157533551 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
