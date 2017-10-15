#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t93825768;

#include "Type_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  MonoType_t  : public Type_t
{
public:
	t93825768 * f8;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(MonoType_t, f8)); }
	inline t93825768 * fg8() const { return f8; }
	inline t93825768 ** fag8() { return &f8; }
	inline void fs8(t93825768 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
