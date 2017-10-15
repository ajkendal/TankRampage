#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3764931161;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2748923918  : public Il2CppObject
{
public:
	String_t* f0;
	t3764931161* f1;
	t3764931161* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2748923918, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2748923918, f1)); }
	inline t3764931161* fg1() const { return f1; }
	inline t3764931161** fag1() { return &f1; }
	inline void fs1(t3764931161* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2748923918, f2)); }
	inline t3764931161* fg2() const { return f2; }
	inline t3764931161** fag2() { return &f2; }
	inline void fs2(t3764931161* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
