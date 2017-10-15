#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t141003736;
struct Type_t;
struct t706536024;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2468772205  : public Il2CppObject
{
public:

public:
};

struct t2468772205_SFs
{
public:
	t141003736 * f0;
	Type_t * f1;
	t706536024 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2468772205_SFs, f0)); }
	inline t141003736 * fg0() const { return f0; }
	inline t141003736 ** fag0() { return &f0; }
	inline void fs0(t141003736 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2468772205_SFs, f1)); }
	inline Type_t * fg1() const { return f1; }
	inline Type_t ** fag1() { return &f1; }
	inline void fs1(Type_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2468772205_SFs, f2)); }
	inline t706536024 * fg2() const { return f2; }
	inline t706536024 ** fag2() { return &f2; }
	inline void fs2(t706536024 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
