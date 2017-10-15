#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2734775517;
struct t3293556779;
struct t3764931161;
struct t4260152181;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1974446569  : public Il2CppObject
{
public:
	Il2CppObject * f0;
	Il2CppObject * f1;
	t3764931161* f2;
	bool f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1974446569, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1974446569, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1974446569, f2)); }
	inline t3764931161* fg2() const { return f2; }
	inline t3764931161** fag2() { return &f2; }
	inline void fs2(t3764931161* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1974446569, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}
};

struct t1974446569_SFs
{
public:
	t4260152181 * f4;
	t4260152181 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1974446569_SFs, f4)); }
	inline t4260152181 * fg4() const { return f4; }
	inline t4260152181 ** fag4() { return &f4; }
	inline void fs4(t4260152181 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1974446569_SFs, f5)); }
	inline t4260152181 * fg5() const { return f5; }
	inline t4260152181 ** fag5() { return &f5; }
	inline void fs5(t4260152181 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
