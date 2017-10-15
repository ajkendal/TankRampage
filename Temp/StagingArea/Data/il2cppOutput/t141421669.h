#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t177866473;
struct t3515545570;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t141421669 
{
public:
	t177866473 * f0;
	t3515545570 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t141421669, f0)); }
	inline t177866473 * fg0() const { return f0; }
	inline t177866473 ** fag0() { return &f0; }
	inline void fs0(t177866473 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t141421669, f1)); }
	inline t3515545570 * fg1() const { return f1; }
	inline t3515545570 ** fag1() { return &f1; }
	inline void fs1(t3515545570 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
