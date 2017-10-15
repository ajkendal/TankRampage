#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;

#include "t2320721629.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t784678441  : public t2320721629
{
public:
	t3835026402* f13;
	int32_t f14;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t784678441, f13)); }
	inline t3835026402* fg13() const { return f13; }
	inline t3835026402** fag13() { return &f13; }
	inline void fs13(t3835026402* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t784678441, f14)); }
	inline int32_t fg14() const { return f14; }
	inline int32_t* fag14() { return &f14; }
	inline void fs14(int32_t value)
	{
		f14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
