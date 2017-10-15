#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t4028081426.h"
#include "t1304440100.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t720308222 
{
public:
	String_t* f0;
	int32_t f1;
	int64_t f2;
	int64_t f3;
	int64_t f4;
	int64_t f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t720308222, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t720308222, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t720308222, f2)); }
	inline int64_t fg2() const { return f2; }
	inline int64_t* fag2() { return &f2; }
	inline void fs2(int64_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t720308222, f3)); }
	inline int64_t fg3() const { return f3; }
	inline int64_t* fag3() { return &f3; }
	inline void fs3(int64_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t720308222, f4)); }
	inline int64_t fg4() const { return f4; }
	inline int64_t* fag4() { return &f4; }
	inline void fs4(int64_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t720308222, f5)); }
	inline int64_t fg5() const { return f5; }
	inline int64_t* fag5() { return &f5; }
	inline void fs5(int64_t value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.IO.MonoIOStat
struct t720308222_marshaled
{
	char* f0;
	int32_t f1;
	int64_t f2;
	int64_t f3;
	int64_t f4;
	int64_t f5;
};
