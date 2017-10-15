#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1029367511;

#include "Il2CppObject.h"
#include "IntPtr_t.h"
#include "t164351069.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2902236272  : public Il2CppObject
{
public:
	IntPtr_t f0;
	String_t* f1;
	int32_t f2;
	bool f3;
	String_t* f4;
	t1029367511 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2902236272, f0)); }
	inline IntPtr_t fg0() const { return f0; }
	inline IntPtr_t* fag0() { return &f0; }
	inline void fs0(IntPtr_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2902236272, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2902236272, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2902236272, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2902236272, f4)); }
	inline String_t* fg4() const { return f4; }
	inline String_t** fag4() { return &f4; }
	inline void fs4(String_t* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2902236272, f5)); }
	inline t1029367511 * fg5() const { return f5; }
	inline t1029367511 ** fag5() { return &f5; }
	inline void fs5(t1029367511 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t2902236272_SFs
{
public:
	IntPtr_t f6;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2902236272_SFs, f6)); }
	inline IntPtr_t fg6() const { return f6; }
	inline IntPtr_t* fag6() { return &f6; }
	inline void fs6(IntPtr_t value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
