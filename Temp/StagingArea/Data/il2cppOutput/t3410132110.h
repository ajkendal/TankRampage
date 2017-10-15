#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2777156203;
struct String_t;

#include "t2957792450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3410132110  : public t2957792450
{
public:
	t2777156203 * f0;
	String_t* f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3410132110, f0)); }
	inline t2777156203 * fg0() const { return f0; }
	inline t2777156203 ** fag0() { return &f0; }
	inline void fs0(t2777156203 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3410132110, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
