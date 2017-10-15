#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1157533551;
struct t4061077789;

#include "Il2CppObject.h"
#include "t2083237559.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4048061440  : public Il2CppObject
{
public:
	t1157533551 * f0;
	t1157533551 * f1;
	t4061077789 * f2;
	t1157533551 * f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4048061440, f0)); }
	inline t1157533551 * fg0() const { return f0; }
	inline t1157533551 ** fag0() { return &f0; }
	inline void fs0(t1157533551 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4048061440, f1)); }
	inline t1157533551 * fg1() const { return f1; }
	inline t1157533551 ** fag1() { return &f1; }
	inline void fs1(t1157533551 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4048061440, f2)); }
	inline t4061077789 * fg2() const { return f2; }
	inline t4061077789 ** fag2() { return &f2; }
	inline void fs2(t4061077789 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4048061440, f3)); }
	inline t1157533551 * fg3() const { return f3; }
	inline t1157533551 ** fag3() { return &f3; }
	inline void fs3(t1157533551 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4048061440, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
