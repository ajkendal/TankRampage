#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4052785496;

#include "t1145979430.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3643407640  : public t1145979430
{
public:
	t4052785496 * f11;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3643407640, f11)); }
	inline t4052785496 * fg11() const { return f11; }
	inline t4052785496 ** fag11() { return &f11; }
	inline void fs11(t4052785496 * value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
