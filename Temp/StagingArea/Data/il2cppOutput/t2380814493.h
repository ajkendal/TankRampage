#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2856386896;
struct t4287356134;
struct t3855643147;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2380814493  : public Il2CppObject
{
public:
	t2856386896 * f0;
	Il2CppObject* f1;
	Il2CppObject* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2380814493, f0)); }
	inline t2856386896 * fg0() const { return f0; }
	inline t2856386896 ** fag0() { return &f0; }
	inline void fs0(t2856386896 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2380814493, f1)); }
	inline Il2CppObject* fg1() const { return f1; }
	inline Il2CppObject** fag1() { return &f1; }
	inline void fs1(Il2CppObject* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2380814493, f2)); }
	inline Il2CppObject* fg2() const { return f2; }
	inline Il2CppObject** fag2() { return &f2; }
	inline void fs2(Il2CppObject* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
