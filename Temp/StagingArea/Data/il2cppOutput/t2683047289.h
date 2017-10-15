#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026403;

#include "t4145793369.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2683047289  : public t4145793369
{
public:

public:
};

struct t2683047289_SFs
{
public:
	t3835026403* f10;
	t3835026403* f11;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t2683047289_SFs, f10)); }
	inline t3835026403* fg10() const { return f10; }
	inline t3835026403** fag10() { return &f10; }
	inline void fs10(t3835026403* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t2683047289_SFs, f11)); }
	inline t3835026403* fg11() const { return f11; }
	inline t3835026403** fag11() { return &f11; }
	inline void fs11(t3835026403* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
