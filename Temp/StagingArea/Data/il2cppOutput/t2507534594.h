#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2771249306;
struct t3102830828;
struct t2144891177;

#include "t1822722024.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2507534594  : public t1822722024
{
public:
	t2771249306 * f1;
	t3102830828 * f2;
	t2144891177 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2507534594, f1)); }
	inline t2771249306 * fg1() const { return f1; }
	inline t2771249306 ** fag1() { return &f1; }
	inline void fs1(t2771249306 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2507534594, f2)); }
	inline t3102830828 * fg2() const { return f2; }
	inline t3102830828 ** fag2() { return &f2; }
	inline void fs2(t3102830828 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2507534594, f3)); }
	inline t2144891177 * fg3() const { return f3; }
	inline t2144891177 ** fag3() { return &f3; }
	inline void fs3(t2144891177 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
