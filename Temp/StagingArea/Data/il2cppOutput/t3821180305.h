#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t599299988;
struct t89523354;
struct t132483052;

#include "Il2CppObject.h"
#include "IntPtr_t.h"
#include "t3431224817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3821180305  : public Il2CppObject
{
public:
	IntPtr_t f0;
	String_t* f1;
	t3431224817  f2;
	bool f3;
	bool f4;
	t599299988 * f5;
	t89523354 * f6;
	t132483052 * f7;
	bool f8;
	bool f9;
	bool f10;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3821180305, f0)); }
	inline IntPtr_t fg0() const { return f0; }
	inline IntPtr_t* fag0() { return &f0; }
	inline void fs0(IntPtr_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3821180305, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3821180305, f2)); }
	inline t3431224817  fg2() const { return f2; }
	inline t3431224817 * fag2() { return &f2; }
	inline void fs2(t3431224817  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3821180305, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3821180305, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3821180305, f5)); }
	inline t599299988 * fg5() const { return f5; }
	inline t599299988 ** fag5() { return &f5; }
	inline void fs5(t599299988 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3821180305, f6)); }
	inline t89523354 * fg6() const { return f6; }
	inline t89523354 ** fag6() { return &f6; }
	inline void fs6(t89523354 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3821180305, f7)); }
	inline t132483052 * fg7() const { return f7; }
	inline t132483052 ** fag7() { return &f7; }
	inline void fs7(t132483052 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3821180305, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t3821180305, f9)); }
	inline bool fg9() const { return f9; }
	inline bool* fag9() { return &f9; }
	inline void fs9(bool value)
	{
		f9 = value;
	}

	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t3821180305, f10)); }
	inline bool fg10() const { return f10; }
	inline bool* fag10() { return &f10; }
	inline void fs10(bool value)
	{
		f10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
