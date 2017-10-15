#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t400430593;
struct t4260152181;

#include "t3409995484.h"
#include "t2401942615.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1301108600  : public t3409995484
{
public:
	t400430593 * f4;
	int32_t f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1301108600, f4)); }
	inline t400430593 * fg4() const { return f4; }
	inline t400430593 ** fag4() { return &f4; }
	inline void fs4(t400430593 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1301108600, f5)); }
	inline int32_t fg5() const { return f5; }
	inline int32_t* fag5() { return &f5; }
	inline void fs5(int32_t value)
	{
		f5 = value;
	}
};

struct t1301108600_SFs
{
public:
	t4260152181 * f6;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1301108600_SFs, f6)); }
	inline t4260152181 * fg6() const { return f6; }
	inline t4260152181 ** fag6() { return &f6; }
	inline void fs6(t4260152181 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
