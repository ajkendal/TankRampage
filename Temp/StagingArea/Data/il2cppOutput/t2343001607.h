﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3736643015;
struct t41750736;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2343001607  : public Il2CppObject
{
public:

public:
};

struct t2343001607_SFs
{
public:
	t3736643015 * f0;
	t41750736 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2343001607_SFs, f0)); }
	inline t3736643015 * fg0() const { return f0; }
	inline t3736643015 ** fag0() { return &f0; }
	inline void fs0(t3736643015 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2343001607_SFs, f1)); }
	inline t41750736 * fg1() const { return f1; }
	inline t41750736 ** fag1() { return &f1; }
	inline void fs1(t41750736 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
