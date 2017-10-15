#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1157533551;
struct t1468494371;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t882669334  : public Il2CppObject
{
public:
	String_t* f0;
	t1157533551 * f1;
	t1468494371 * f2;
	bool f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t882669334, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t882669334, f1)); }
	inline t1157533551 * fg1() const { return f1; }
	inline t1157533551 ** fag1() { return &f1; }
	inline void fs1(t1157533551 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t882669334, f2)); }
	inline t1468494371 * fg2() const { return f2; }
	inline t1468494371 ** fag2() { return &f2; }
	inline void fs2(t1468494371 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t882669334, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
