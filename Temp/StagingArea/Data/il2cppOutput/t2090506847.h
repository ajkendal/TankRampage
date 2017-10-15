#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4083992780;
struct t548104575;
struct t1704802226;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2090506847  : public Il2CppObject
{
public:

public:
};

struct t2090506847_SFs
{
public:
	t4083992780* f0;
	t548104575* f1;
	t1704802226* f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2090506847_SFs, f0)); }
	inline t4083992780* fg0() const { return f0; }
	inline t4083992780** fag0() { return &f0; }
	inline void fs0(t4083992780* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2090506847_SFs, f1)); }
	inline t548104575* fg1() const { return f1; }
	inline t548104575** fag1() { return &f1; }
	inline void fs1(t548104575* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2090506847_SFs, f2)); }
	inline t1704802226* fg2() const { return f2; }
	inline t1704802226** fag2() { return &f2; }
	inline void fs2(t1704802226* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
