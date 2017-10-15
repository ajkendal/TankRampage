#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2247038062;
struct String_t;
struct t2956351477;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1790835923  : public Il2CppObject
{
public:
	t2247038062 * f0;
	String_t* f1;
	t2956351477 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1790835923, f0)); }
	inline t2247038062 * fg0() const { return f0; }
	inline t2247038062 ** fag0() { return &f0; }
	inline void fs0(t2247038062 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1790835923, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1790835923, f2)); }
	inline t2956351477 * fg2() const { return f2; }
	inline t2956351477 ** fag2() { return &f2; }
	inline void fs2(t2956351477 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
