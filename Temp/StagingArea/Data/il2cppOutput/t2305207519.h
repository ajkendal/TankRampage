#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2768948945;
struct t2125916575;
struct t3835026402;
struct t3566053706;
struct t1685951112;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2305207519  : public Il2CppObject
{
public:
	t2768948945 * f0;
	t2125916575 * f1;
	t3835026402* f2;
	t3566053706 * f3;
	t1685951112* f4;
	bool f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2305207519, f0)); }
	inline t2768948945 * fg0() const { return f0; }
	inline t2768948945 ** fag0() { return &f0; }
	inline void fs0(t2768948945 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2305207519, f1)); }
	inline t2125916575 * fg1() const { return f1; }
	inline t2125916575 ** fag1() { return &f1; }
	inline void fs1(t2125916575 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2305207519, f2)); }
	inline t3835026402* fg2() const { return f2; }
	inline t3835026402** fag2() { return &f2; }
	inline void fs2(t3835026402* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2305207519, f3)); }
	inline t3566053706 * fg3() const { return f3; }
	inline t3566053706 ** fag3() { return &f3; }
	inline void fs3(t3566053706 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2305207519, f4)); }
	inline t1685951112* fg4() const { return f4; }
	inline t1685951112** fag4() { return &f4; }
	inline void fs4(t1685951112* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2305207519, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
