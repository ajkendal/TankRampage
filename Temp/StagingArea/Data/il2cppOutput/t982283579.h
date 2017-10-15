#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3764931161;

#include "t1513750462.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t982283579  : public t1513750462
{
public:
	t3764931161* f10;
	t3764931161* f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t982283579, f10)); }
	inline t3764931161* fg10() const { return f10; }
	inline t3764931161** fag10() { return &f10; }
	inline void fs10(t3764931161* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t982283579, f11)); }
	inline t3764931161* fg11() const { return f11; }
	inline t3764931161** fag11() { return &f11; }
	inline void fs11(t3764931161* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
