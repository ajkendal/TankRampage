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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2158856854  : public t3378505055
{
public:

public:
};

struct t2158856854_SFs
{
public:
	t3835026402* f9;

public:
	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2158856854_SFs, f9)); }
	inline t3835026402* fg9() const { return f9; }
	inline t3835026402** fag9() { return &f9; }
	inline void fs9(t3835026402* value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
