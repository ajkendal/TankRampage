#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1527285693;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2499617345  : public Il2CppObject
{
public:
	t1527285693 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2499617345, f0)); }
	inline t1527285693 * fg0() const { return f0; }
	inline t1527285693 ** fag0() { return &f0; }
	inline void fs0(t1527285693 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
