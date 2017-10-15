#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t110040591;
struct t2756360694;
struct String_t;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1749942528  : public Il2CppObject
{
public:
	t110040591 * f0;
	t2756360694 * f1;
	String_t* f2;
	bool f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1749942528, f0)); }
	inline t110040591 * fg0() const { return f0; }
	inline t110040591 ** fag0() { return &f0; }
	inline void fs0(t110040591 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1749942528, f1)); }
	inline t2756360694 * fg1() const { return f1; }
	inline t2756360694 ** fag1() { return &f1; }
	inline void fs1(t2756360694 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1749942528, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1749942528, f3)); }
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
