#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1329556219;
struct String_t;

#include "t1145342165.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1329556219  : public t1145342165
{
public:
	String_t* f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1329556219, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

struct t1329556219_SFs
{
public:
	t1329556219 * f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1329556219_SFs, f0)); }
	inline t1329556219 * fg0() const { return f0; }
	inline t1329556219 ** fag0() { return &f0; }
	inline void fs0(t1329556219 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
