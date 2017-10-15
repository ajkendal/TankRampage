#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;

#include "t3378505055.h"
#include "t3076502791.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3387992542  : public t3378505055
{
public:
	t3076502791  f9;
	t3835026402* f10;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3387992542, f9)); }
	inline t3076502791  fg9() const { return f9; }
	inline t3076502791 * fag9() { return &f9; }
	inline void fs9(t3076502791  value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3387992542, f10)); }
	inline t3835026402* fg10() const { return f10; }
	inline t3835026402** fag10() { return &f10; }
	inline void fs10(t3835026402* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
