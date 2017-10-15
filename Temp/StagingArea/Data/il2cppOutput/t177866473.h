#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1183804428;

#include "t1547659088.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t177866473  : public t1547659088
{
public:

public:
};

struct t177866473_SFs
{
public:
	t1183804428 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t177866473_SFs, f2)); }
	inline t1183804428 * fg2() const { return f2; }
	inline t1183804428 ** fag2() { return &f2; }
	inline void fs2(t1183804428 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
