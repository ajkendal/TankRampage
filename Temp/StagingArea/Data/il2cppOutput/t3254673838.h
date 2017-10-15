#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2805735124;
struct t154152485;

#include "t3512074712.h"
#include "t3774646878.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3254673838  : public t3512074712
{
public:
	t2805735124 * f3;
	t3774646878  f4;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3254673838, f3)); }
	inline t2805735124 * fg3() const { return f3; }
	inline t2805735124 ** fag3() { return &f3; }
	inline void fs3(t2805735124 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3254673838, f4)); }
	inline t3774646878  fg4() const { return f4; }
	inline t3774646878 * fag4() { return &f4; }
	inline void fs4(t3774646878  value)
	{
		f4 = value;
	}
};

struct t3254673838_SFs
{
public:
	t154152485 * f5;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3254673838_SFs, f5)); }
	inline t154152485 * fg5() const { return f5; }
	inline t154152485 ** fag5() { return &f5; }
	inline void fs5(t154152485 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
