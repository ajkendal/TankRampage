#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t488218382  : public Il2CppObject
{
public:

public:
};

struct t488218382_SFs
{
public:
	int32_t f0;
	int32_t f1;
	t465617798  f2;
	bool f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t488218382_SFs, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t488218382_SFs, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t488218382_SFs, f2)); }
	inline t465617798  fg2() const { return f2; }
	inline t465617798 * fag2() { return &f2; }
	inline void fs2(t465617798  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t488218382_SFs, f3)); }
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
