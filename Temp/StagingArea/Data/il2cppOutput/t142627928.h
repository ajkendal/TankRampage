#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t40021671;
struct t759339468;
struct t3315407976;
struct t2101607268;
struct t1685951112;

#include "t2520131484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t142627928  : public t2520131484
{
public:
	int32_t f10;
	t40021671* f11;
	t759339468 * f12;
	t3315407976* f13;
	t2101607268 * f14;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t142627928, f10)); }
	inline int32_t fg10() const { return f10; }
	inline int32_t* fag10() { return &f10; }
	inline void fs10(int32_t value)
	{
		f10 = value;
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t142627928, f11)); }
	inline t40021671* fg11() const { return f11; }
	inline t40021671** fag11() { return &f11; }
	inline void fs11(t40021671* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t142627928, f12)); }
	inline t759339468 * fg12() const { return f12; }
	inline t759339468 ** fag12() { return &f12; }
	inline void fs12(t759339468 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t142627928, f13)); }
	inline t3315407976* fg13() const { return f13; }
	inline t3315407976** fag13() { return &f13; }
	inline void fs13(t3315407976* value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t142627928, f14)); }
	inline t2101607268 * fg14() const { return f14; }
	inline t2101607268 ** fag14() { return &f14; }
	inline void fs14(t2101607268 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

struct t142627928_SFs
{
public:
	t1685951112* f15;

public:
	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t142627928_SFs, f15)); }
	inline t1685951112* fg15() const { return f15; }
	inline t1685951112** fag15() { return &f15; }
	inline void fs15(t1685951112* value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
