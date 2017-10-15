#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t657369457;

#include "t657369457.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t369203898  : public t657369457
{
public:
	t657369457 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t369203898, f1)); }
	inline t657369457 * fg1() const { return f1; }
	inline t657369457 ** fag1() { return &f1; }
	inline void fs1(t657369457 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
