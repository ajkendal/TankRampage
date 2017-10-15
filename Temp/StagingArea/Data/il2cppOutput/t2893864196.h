#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4221943136;

#include "t533382383.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2893864196  : public t533382383
{
public:
	t4221943136 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2893864196, f1)); }
	inline t4221943136 * fg1() const { return f1; }
	inline t4221943136 ** fag1() { return &f1; }
	inline void fs1(t4221943136 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
