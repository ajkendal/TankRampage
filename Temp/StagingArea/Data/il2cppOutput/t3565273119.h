#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1157533551;
struct t2777156203;
struct t3835026402;
struct t3764931161;
struct t1163649260;

#include "Il2CppObject.h"
#include "t3076502791.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3565273119  : public Il2CppObject
{
public:
	t1157533551 * f0;
	t2777156203 * f1;
	t3076502791  f2;
	t3835026402* f3;
	t3764931161* f4;
	bool f5;
	bool f6;
	t1163649260* f7;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3565273119, f0)); }
	inline t1157533551 * fg0() const { return f0; }
	inline t1157533551 ** fag0() { return &f0; }
	inline void fs0(t1157533551 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3565273119, f1)); }
	inline t2777156203 * fg1() const { return f1; }
	inline t2777156203 ** fag1() { return &f1; }
	inline void fs1(t2777156203 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3565273119, f2)); }
	inline t3076502791  fg2() const { return f2; }
	inline t3076502791 * fag2() { return &f2; }
	inline void fs2(t3076502791  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3565273119, f3)); }
	inline t3835026402* fg3() const { return f3; }
	inline t3835026402** fag3() { return &f3; }
	inline void fs3(t3835026402* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3565273119, f4)); }
	inline t3764931161* fg4() const { return f4; }
	inline t3764931161** fag4() { return &f4; }
	inline void fs4(t3764931161* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3565273119, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3565273119, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3565273119, f7)); }
	inline t1163649260* fg7() const { return f7; }
	inline t1163649260** fag7() { return &f7; }
	inline void fs7(t1163649260* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
