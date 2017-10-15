#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t2933746480.h"
#include "t1834055012.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1940822727  : public Il2CppObject
{
public:
	t2933746480  f0;
	t2933746480  f1;
	t1834055012  f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1940822727, f0)); }
	inline t2933746480  fg0() const { return f0; }
	inline t2933746480 * fag0() { return &f0; }
	inline void fs0(t2933746480  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1940822727, f1)); }
	inline t2933746480  fg1() const { return f1; }
	inline t2933746480 * fag1() { return &f1; }
	inline void fs1(t2933746480  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1940822727, f2)); }
	inline t1834055012  fg2() const { return f2; }
	inline t1834055012 * fag2() { return &f2; }
	inline void fs2(t1834055012  value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
