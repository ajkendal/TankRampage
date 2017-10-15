#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3102830828;

#include "t2003179150.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2032220949  : public t2003179150
{
public:
	t3102830828 * f0;
	bool f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2032220949, f0)); }
	inline t3102830828 * fg0() const { return f0; }
	inline t3102830828 ** fag0() { return &f0; }
	inline void fs0(t3102830828 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2032220949, f1)); }
	inline bool fg1() const { return f1; }
	inline bool* fag1() { return &f1; }
	inline void fs1(bool value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
