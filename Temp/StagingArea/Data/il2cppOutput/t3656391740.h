#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1163649260;
struct t3764931161;

#include "t3378505055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3656391740  : public t3378505055
{
public:
	t1163649260* f9;
	t3764931161* f10;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3656391740, f9)); }
	inline t1163649260* fg9() const { return f9; }
	inline t1163649260** fag9() { return &f9; }
	inline void fs9(t1163649260* value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3656391740, f10)); }
	inline t3764931161* fg10() const { return f10; }
	inline t3764931161** fag10() { return &f10; }
	inline void fs10(t3764931161* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
