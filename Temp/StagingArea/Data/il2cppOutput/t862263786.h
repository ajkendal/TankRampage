#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4081158439;

#include "t191418348.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t862263786  : public t191418348
{
public:
	t4081158439 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t862263786, f2)); }
	inline t4081158439 * fg2() const { return f2; }
	inline t4081158439 ** fag2() { return &f2; }
	inline void fs2(t4081158439 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
