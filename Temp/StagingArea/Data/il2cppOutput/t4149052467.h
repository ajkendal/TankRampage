#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2235910900;

#include "t3810211700.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4149052467  : public t3810211700
{
public:

public:
};

struct t4149052467_SFs
{
public:
	t2235910900* f14;
	uint16_t f15;

public:
	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t4149052467_SFs, f14)); }
	inline t2235910900* fg14() const { return f14; }
	inline t2235910900** fag14() { return &f14; }
	inline void fs14(t2235910900* value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t4149052467_SFs, f15)); }
	inline uint16_t fg15() const { return f15; }
	inline uint16_t* fag15() { return &f15; }
	inline void fs15(uint16_t value)
	{
		f15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
