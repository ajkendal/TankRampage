#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;

#include "t2320721629.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1666784219  : public t2320721629
{
public:
	Il2CppObject * f13;

public:
	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t1666784219, f13)); }
	inline Il2CppObject * fg13() const { return f13; }
	inline Il2CppObject ** fag13() { return &f13; }
	inline void fs13(Il2CppObject * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
