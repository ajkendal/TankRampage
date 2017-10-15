#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3289915003;
struct t3835026402;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2904758852  : public Il2CppObject
{
public:
	t3289915003 * f0;
	t3835026402* f1;
	t3835026402* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2904758852, f0)); }
	inline t3289915003 * fg0() const { return f0; }
	inline t3289915003 ** fag0() { return &f0; }
	inline void fs0(t3289915003 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2904758852, f1)); }
	inline t3835026402* fg1() const { return f1; }
	inline t3835026402** fag1() { return &f1; }
	inline void fs1(t3835026402* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2904758852, f2)); }
	inline t3835026402* fg2() const { return f2; }
	inline t3835026402** fag2() { return &f2; }
	inline void fs2(t3835026402* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
