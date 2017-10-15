#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t349040276;
struct t634113868;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t349040276  : public Il2CppObject
{
public:
	t634113868 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t349040276, f2)); }
	inline t634113868 * fg2() const { return f2; }
	inline t634113868 ** fag2() { return &f2; }
	inline void fs2(t634113868 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t349040276_SFs
{
public:
	t349040276 * f0;
	t349040276 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t349040276_SFs, f0)); }
	inline t349040276 * fg0() const { return f0; }
	inline t349040276 ** fag0() { return &f0; }
	inline void fs0(t349040276 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t349040276_SFs, f1)); }
	inline t349040276 * fg1() const { return f1; }
	inline t349040276 ** fag1() { return &f1; }
	inline void fs1(t349040276 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
