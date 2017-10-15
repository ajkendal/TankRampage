#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t293776522;

#include "t49333446.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t293776522  : public t49333446
{
public:
	t293776522 * f9;
	t293776522 * f10;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t293776522, f9)); }
	inline t293776522 * fg9() const { return f9; }
	inline t293776522 ** fag9() { return &f9; }
	inline void fs9(t293776522 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t293776522, f10)); }
	inline t293776522 * fg10() const { return f10; }
	inline t293776522 ** fag10() { return &f10; }
	inline void fs10(t293776522 * value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
