#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t388921639;
struct Il2CppObject;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2012322125  : public Il2CppObject
{
public:
	t388921639 * f4;
	String_t* f5;
	String_t* f6;
	String_t* f7;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2012322125, f4)); }
	inline t388921639 * fg4() const { return f4; }
	inline t388921639 ** fag4() { return &f4; }
	inline void fs4(t388921639 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2012322125, f5)); }
	inline String_t* fg5() const { return f5; }
	inline String_t** fag5() { return &f5; }
	inline void fs5(String_t* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2012322125, f6)); }
	inline String_t* fg6() const { return f6; }
	inline String_t** fag6() { return &f6; }
	inline void fs6(String_t* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2012322125, f7)); }
	inline String_t* fg7() const { return f7; }
	inline String_t** fag7() { return &f7; }
	inline void fs7(String_t* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

struct t2012322125_SFs
{
public:
	bool f0;
	String_t* f1;
	bool f2;
	String_t* f3;
	Il2CppObject * f8;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2012322125_SFs, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2012322125_SFs, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2012322125_SFs, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2012322125_SFs, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2012322125_SFs, f8)); }
	inline Il2CppObject * fg8() const { return f8; }
	inline Il2CppObject ** fag8() { return &f8; }
	inline void fs8(Il2CppObject * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
