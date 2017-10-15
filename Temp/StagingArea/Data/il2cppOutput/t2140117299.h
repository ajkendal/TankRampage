#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2140117299;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2140117299  : public Il2CppObject
{
public:

public:
};

struct t2140117299_SFs
{
public:
	t2140117299 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2140117299_SFs, f0)); }
	inline t2140117299 * fg0() const { return f0; }
	inline t2140117299 ** fag0() { return &f0; }
	inline void fs0(t2140117299 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
