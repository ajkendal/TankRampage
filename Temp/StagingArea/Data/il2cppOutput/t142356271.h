#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4114307779;
struct t4127229017;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t142356271  : public Il2CppObject
{
public:
	t4114307779 * f0;
	t4127229017 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t142356271, f0)); }
	inline t4114307779 * fg0() const { return f0; }
	inline t4114307779 ** fag0() { return &f0; }
	inline void fs0(t4114307779 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t142356271, f1)); }
	inline t4127229017 * fg1() const { return f1; }
	inline t4127229017 ** fag1() { return &f1; }
	inline void fs1(t4127229017 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
