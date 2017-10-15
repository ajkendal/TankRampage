#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2307902732;

#include "Il2CppObject.h"
#include "t1834055012.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t823513700  : public Il2CppObject
{
public:

public:
};

struct t823513700_SFs
{
public:
	t1834055012  f0;
	t1834055012  f1;
	t1834055012  f2;
	t1834055012  f3;
	t2307902732 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t823513700_SFs, f0)); }
	inline t1834055012  fg0() const { return f0; }
	inline t1834055012 * fag0() { return &f0; }
	inline void fs0(t1834055012  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t823513700_SFs, f1)); }
	inline t1834055012  fg1() const { return f1; }
	inline t1834055012 * fag1() { return &f1; }
	inline void fs1(t1834055012  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t823513700_SFs, f2)); }
	inline t1834055012  fg2() const { return f2; }
	inline t1834055012 * fag2() { return &f2; }
	inline void fs2(t1834055012  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t823513700_SFs, f3)); }
	inline t1834055012  fg3() const { return f3; }
	inline t1834055012 * fag3() { return &f3; }
	inline void fs3(t1834055012  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t823513700_SFs, f4)); }
	inline t2307902732 * fg4() const { return f4; }
	inline t2307902732 ** fag4() { return &f4; }
	inline void fs4(t2307902732 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
