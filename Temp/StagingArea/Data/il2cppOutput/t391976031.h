#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t177866473;
struct t3192529782;
struct t3917740919;

#include "t3512074712.h"
#include "t1612389109.h"
#include "t3774646878.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t391976031  : public t3512074712
{
public:
	bool f3;
	int32_t f4;
	t3774646878  f5;
	t177866473 * f6;
	t3192529782 * f7;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t391976031, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t391976031, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t391976031, f5)); }
	inline t3774646878  fg5() const { return f5; }
	inline t3774646878 * fag5() { return &f5; }
	inline void fs5(t3774646878  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t391976031, f6)); }
	inline t177866473 * fg6() const { return f6; }
	inline t177866473 ** fag6() { return &f6; }
	inline void fs6(t177866473 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t391976031, f7)); }
	inline t3192529782 * fg7() const { return f7; }
	inline t3192529782 ** fag7() { return &f7; }
	inline void fs7(t3192529782 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

struct t391976031_SFs
{
public:
	t3192529782 * f8;
	t3917740919 * f9;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t391976031_SFs, f8)); }
	inline t3192529782 * fg8() const { return f8; }
	inline t3192529782 ** fag8() { return &f8; }
	inline void fs8(t3192529782 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t391976031_SFs, f9)); }
	inline t3917740919 * fg9() const { return f9; }
	inline t3917740919 ** fag9() { return &f9; }
	inline void fs9(t3917740919 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
