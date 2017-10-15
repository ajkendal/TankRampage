#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3205926943;
struct t3713108670;
struct t3261833271;

#include "t3396089105.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3159695552  : public t3396089105
{
public:
	t3205926943 * f20;
	int32_t f21;

public:
	inline static int32_t fog20() { return static_cast<int32_t>(offsetof(t3159695552, f20)); }
	inline t3205926943 * fg20() const { return f20; }
	inline t3205926943 ** fag20() { return &f20; }
	inline void fs20(t3205926943 * value)
	{
		f20 = value;
		Il2CppCodeGenWriteBarrier(&f20, value);
	}

	inline static int32_t fog21() { return static_cast<int32_t>(offsetof(t3159695552, f21)); }
	inline int32_t fg21() const { return f21; }
	inline int32_t* fag21() { return &f21; }
	inline void fs21(int32_t value)
	{
		f21 = value;
	}
};

struct t3159695552_SFs
{
public:
	t3713108670 * f22;
	t3261833271 * f23;

public:
	inline static int32_t fog22() { return static_cast<int32_t>(offsetof(t3159695552_SFs, f22)); }
	inline t3713108670 * fg22() const { return f22; }
	inline t3713108670 ** fag22() { return &f22; }
	inline void fs22(t3713108670 * value)
	{
		f22 = value;
		Il2CppCodeGenWriteBarrier(&f22, value);
	}

	inline static int32_t fog23() { return static_cast<int32_t>(offsetof(t3159695552_SFs, f23)); }
	inline t3261833271 * fg23() const { return f23; }
	inline t3261833271 ** fag23() { return &f23; }
	inline void fs23(t3261833271 * value)
	{
		f23 = value;
		Il2CppCodeGenWriteBarrier(&f23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
