#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3764931161;
struct t4260152181;

#include "t1974446569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3702393985  : public t1974446569
{
public:

public:
};

struct t3702393985_SFs
{
public:
	t3764931161* f6;
	t4260152181 * f7;
	t4260152181 * f8;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3702393985_SFs, f6)); }
	inline t3764931161* fg6() const { return f6; }
	inline t3764931161** fag6() { return &f6; }
	inline void fs6(t3764931161* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3702393985_SFs, f7)); }
	inline t4260152181 * fg7() const { return f7; }
	inline t4260152181 ** fag7() { return &f7; }
	inline void fs7(t4260152181 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3702393985_SFs, f8)); }
	inline t4260152181 * fg8() const { return f8; }
	inline t4260152181 ** fag8() { return &f8; }
	inline void fs8(t4260152181 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
