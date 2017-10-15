#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1525063517;
struct Il2CppObject;
struct t2905364611;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1525063517  : public Il2CppObject
{
public:
	t2905364611 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1525063517, f2)); }
	inline t2905364611 * fg2() const { return f2; }
	inline t2905364611 ** fag2() { return &f2; }
	inline void fs2(t2905364611 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t1525063517_SFs
{
public:
	t1525063517 * f0;
	Il2CppObject * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1525063517_SFs, f0)); }
	inline t1525063517 * fg0() const { return f0; }
	inline t1525063517 ** fag0() { return &f0; }
	inline void fs0(t1525063517 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1525063517_SFs, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
