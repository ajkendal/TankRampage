﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1312997718;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2613566575  : public Il2CppObject
{
public:

public:
};

struct t2613566575_SFs
{
public:
	t1312997718 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2613566575_SFs, f0)); }
	inline t1312997718 * fg0() const { return f0; }
	inline t1312997718 ** fag0() { return &f0; }
	inline void fs0(t1312997718 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
