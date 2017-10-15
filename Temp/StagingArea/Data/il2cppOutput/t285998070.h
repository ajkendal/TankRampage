#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1685951112;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t285998070  : public t4028081426
{
public:

public:
};

struct t285998070_SFs
{
public:
	t1685951112* f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t285998070_SFs, f0)); }
	inline t1685951112* fg0() const { return f0; }
	inline t1685951112** fag0() { return &f0; }
	inline void fs0(t1685951112* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
