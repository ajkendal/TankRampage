#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3996121092;

#include "t1547659088.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2805735124  : public t1547659088
{
public:

public:
};

struct t2805735124_SFs
{
public:
	t3996121092 * f2;
	t3996121092 * f3;
	t3996121092 * f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2805735124_SFs, f2)); }
	inline t3996121092 * fg2() const { return f2; }
	inline t3996121092 ** fag2() { return &f2; }
	inline void fs2(t3996121092 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2805735124_SFs, f3)); }
	inline t3996121092 * fg3() const { return f3; }
	inline t3996121092 ** fag3() { return &f3; }
	inline void fs3(t3996121092 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2805735124_SFs, f4)); }
	inline t3996121092 * fg4() const { return f4; }
	inline t3996121092 ** fag4() { return &f4; }
	inline void fs4(t3996121092 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
