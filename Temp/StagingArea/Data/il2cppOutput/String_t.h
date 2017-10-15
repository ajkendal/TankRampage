#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1685951112;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  String_t  : public Il2CppObject
{
public:
	int32_t f0;
	uint16_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(String_t, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(String_t, f1)); }
	inline uint16_t fg1() const { return f1; }
	inline uint16_t* fag1() { return &f1; }
	inline void fs1(uint16_t value)
	{
		f1 = value;
	}
};

struct String_t_SFs
{
public:
	String_t* f2;
	t1685951112* f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(String_t_SFs, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(String_t_SFs, f3)); }
	inline t1685951112* fg3() const { return f3; }
	inline t1685951112** fag3() { return &f3; }
	inline void fs3(t1685951112* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
