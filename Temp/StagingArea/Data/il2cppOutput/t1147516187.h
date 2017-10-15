#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;
struct t2442356668;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1147516187  : public Il2CppObject
{
public:

public:
};

struct t1147516187_SFs
{
public:
	t3835026402* f0;
	t2442356668* f1;
	t3835026402* f2;
	bool f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1147516187_SFs, f0)); }
	inline t3835026402* fg0() const { return f0; }
	inline t3835026402** fag0() { return &f0; }
	inline void fs0(t3835026402* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1147516187_SFs, f1)); }
	inline t2442356668* fg1() const { return f1; }
	inline t2442356668** fag1() { return &f1; }
	inline void fs1(t2442356668* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1147516187_SFs, f2)); }
	inline t3835026402* fg2() const { return f2; }
	inline t3835026402** fag2() { return &f2; }
	inline void fs2(t3835026402* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1147516187_SFs, f3)); }
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
