#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3632007997;

#include "t937121441.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4284675919  : public t937121441
{
public:
	t3632007997* f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4284675919, f1)); }
	inline t3632007997* fg1() const { return f1; }
	inline t3632007997** fag1() { return &f1; }
	inline void fs1(t3632007997* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
