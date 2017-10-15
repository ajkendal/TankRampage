#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1429855556;

#include "t3378505055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t363125083  : public t3378505055
{
public:
	bool f9;
	t1429855556 * f10;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t363125083, f9)); }
	inline bool fg9() const { return f9; }
	inline bool* fag9() { return &f9; }
	inline void fs9(bool value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t363125083, f10)); }
	inline t1429855556 * fg10() const { return f10; }
	inline t1429855556 ** fag10() { return &f10; }
	inline void fs10(t1429855556 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
