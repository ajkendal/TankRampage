#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1468494371;
struct t2838741986;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2307902732  : public Il2CppObject
{
public:
	t1468494371 * f0;
	t2838741986 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2307902732, f0)); }
	inline t1468494371 * fg0() const { return f0; }
	inline t1468494371 ** fag0() { return &f0; }
	inline void fs0(t1468494371 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2307902732, f1)); }
	inline t2838741986 * fg1() const { return f1; }
	inline t2838741986 ** fag1() { return &f1; }
	inline void fs1(t2838741986 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
