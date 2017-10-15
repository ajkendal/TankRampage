#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2777156203;
struct t3835026402;
struct String_t;
struct Il2CppObject;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2729163191  : public Il2CppObject
{
public:
	t2777156203 * f0;
	t3835026402* f1;
	t3835026402* f2;
	String_t* f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2729163191, f0)); }
	inline t2777156203 * fg0() const { return f0; }
	inline t2777156203 ** fag0() { return &f0; }
	inline void fs0(t2777156203 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2729163191, f1)); }
	inline t3835026402* fg1() const { return f1; }
	inline t3835026402** fag1() { return &f1; }
	inline void fs1(t3835026402* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2729163191, f2)); }
	inline t3835026402* fg2() const { return f2; }
	inline t3835026402** fag2() { return &f2; }
	inline void fs2(t3835026402* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2729163191, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t2729163191_SFs
{
public:
	Il2CppObject * f4;
	bool f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2729163191_SFs, f4)); }
	inline Il2CppObject * fg4() const { return f4; }
	inline Il2CppObject ** fag4() { return &f4; }
	inline void fs4(Il2CppObject * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2729163191_SFs, f5)); }
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
