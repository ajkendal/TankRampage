#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2150674711;
struct t4083183608;
struct t3545875401;

#include "Il2CppObject.h"
#include "t2553848979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3941717988  : public Il2CppObject
{
public:

public:
};

struct t3941717988_SFs
{
public:
	t2150674711 * f0;
	t2150674711 * f1;
	t4083183608 * f2;
	t2553848979  f3;
	t3545875401 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3941717988_SFs, f0)); }
	inline t2150674711 * fg0() const { return f0; }
	inline t2150674711 ** fag0() { return &f0; }
	inline void fs0(t2150674711 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3941717988_SFs, f1)); }
	inline t2150674711 * fg1() const { return f1; }
	inline t2150674711 ** fag1() { return &f1; }
	inline void fs1(t2150674711 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3941717988_SFs, f2)); }
	inline t4083183608 * fg2() const { return f2; }
	inline t4083183608 ** fag2() { return &f2; }
	inline void fs2(t4083183608 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3941717988_SFs, f3)); }
	inline t2553848979  fg3() const { return f3; }
	inline t2553848979 * fag3() { return &f3; }
	inline void fs3(t2553848979  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3941717988_SFs, f4)); }
	inline t3545875401 * fg4() const { return f4; }
	inline t3545875401 ** fag4() { return &f4; }
	inline void fs4(t3545875401 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
