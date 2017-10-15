#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t3835026402;
struct t1312997718;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t201746976  : public Il2CppObject
{
public:
	String_t* f0;
	int32_t f1;
	bool f2;
	bool f3;
	t3835026402* f4;
	t1312997718 * f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t201746976, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t201746976, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t201746976, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t201746976, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t201746976, f4)); }
	inline t3835026402* fg4() const { return f4; }
	inline t3835026402** fag4() { return &f4; }
	inline void fs4(t3835026402* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t201746976, f5)); }
	inline t1312997718 * fg5() const { return f5; }
	inline t1312997718 ** fag5() { return &f5; }
	inline void fs5(t1312997718 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

struct t201746976_SFs
{
public:
	int32_t f6;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t201746976_SFs, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
