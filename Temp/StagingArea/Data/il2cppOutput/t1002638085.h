#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;

#include "t1746250421.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1002638085  : public t1746250421
{
public:
	t3835026402* f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1002638085, f3)); }
	inline t3835026402* fg3() const { return f3; }
	inline t3835026402** fag3() { return &f3; }
	inline void fs3(t3835026402* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
