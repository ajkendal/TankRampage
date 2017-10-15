#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4022401196;
struct t1727563613;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t780808101  : public Il2CppObject
{
public:

public:
};

struct t780808101_SFs
{
public:
	bool f0;
	t4022401196* f1;
	t4022401196* f2;
	t4022401196* f3;
	t1727563613* f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t780808101_SFs, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t780808101_SFs, f1)); }
	inline t4022401196* fg1() const { return f1; }
	inline t4022401196** fag1() { return &f1; }
	inline void fs1(t4022401196* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t780808101_SFs, f2)); }
	inline t4022401196* fg2() const { return f2; }
	inline t4022401196** fag2() { return &f2; }
	inline void fs2(t4022401196* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t780808101_SFs, f3)); }
	inline t4022401196* fg3() const { return f3; }
	inline t4022401196** fag3() { return &f3; }
	inline void fs3(t4022401196* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t780808101_SFs, f4)); }
	inline t1727563613* fg4() const { return f4; }
	inline t1727563613** fag4() { return &f4; }
	inline void fs4(t1727563613* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
