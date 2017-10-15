#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3998167015;
struct t2885722661;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t26215507  : public Il2CppObject
{
public:
	t3998167015 * f0;
	t2885722661 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t26215507, f0)); }
	inline t3998167015 * fg0() const { return f0; }
	inline t3998167015 ** fag0() { return &f0; }
	inline void fs0(t3998167015 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t26215507, f1)); }
	inline t2885722661 * fg1() const { return f1; }
	inline t2885722661 ** fag1() { return &f1; }
	inline void fs1(t2885722661 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
