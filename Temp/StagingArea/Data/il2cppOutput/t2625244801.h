#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t2235910900;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2625244801  : public Il2CppObject
{
public:
	int32_t f0;
	bool f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2625244801, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2625244801, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}
};

struct t2625244801_SFs
{
public:
	Il2CppObject * f2;
	t2235910900* f3;
	t2235910900* f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2625244801_SFs, f2)); }
	inline Il2CppObject * fg2() const { return f2; }
	inline Il2CppObject ** fag2() { return &f2; }
	inline void fs2(Il2CppObject * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2625244801_SFs, f3)); }
	inline t2235910900* fg3() const { return f3; }
	inline t2235910900** fag3() { return &f3; }
	inline void fs3(t2235910900* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2625244801_SFs, f4)); }
	inline t2235910900* fg4() const { return f4; }
	inline t2235910900** fag4() { return &f4; }
	inline void fs4(t2235910900* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
