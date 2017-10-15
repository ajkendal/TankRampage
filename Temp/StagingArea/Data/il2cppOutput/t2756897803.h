#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;
struct t3957658533;

#include "t2125916575.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2756897803  : public t2125916575
{
public:
	bool f28;

public:
	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t2756897803, f28)); }
	inline bool fg28() const { return f28; }
	inline bool* fag28() { return &f28; }
	inline void fs28(bool value)
	{
		f28 = value;
	}
};

struct t2756897803_SFs
{
public:
	t3835026402* f29;
	t3957658533* f30;

public:
	inline static int32_t fog29() { return static_cast<int32_t>(offsetof(t2756897803_SFs, f29)); }
	inline t3835026402* fg29() const { return f29; }
	inline t3835026402** fag29() { return &f29; }
	inline void fs29(t3835026402* value)
	{
		f29 = value;
		Il2CppCodeGenWriteBarrier(&f29, value);
	}

	inline static int32_t fog30() { return static_cast<int32_t>(offsetof(t2756897803_SFs, f30)); }
	inline t3957658533* fg30() const { return f30; }
	inline t3957658533** fag30() { return &f30; }
	inline void fs30(t3957658533* value)
	{
		f30 = value;
		Il2CppCodeGenWriteBarrier(&f30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
