#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2535388339;
struct t3835026402;

#include "t1430954503.h"
#include "t577592360.h"
#include "t2275266661.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3378505055  : public t1430954503
{
public:
	t2535388339 * f5;
	uint8_t f6;
	uint8_t f7;
	t3835026402* f8;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3378505055, f5)); }
	inline t2535388339 * fg5() const { return f5; }
	inline t2535388339 ** fag5() { return &f5; }
	inline void fs5(t2535388339 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t3378505055, f6)); }
	inline uint8_t fg6() const { return f6; }
	inline uint8_t* fag6() { return &f6; }
	inline void fs6(uint8_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t3378505055, f7)); }
	inline uint8_t fg7() const { return f7; }
	inline uint8_t* fag7() { return &f7; }
	inline void fs7(uint8_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t3378505055, f8)); }
	inline t3835026402* fg8() const { return f8; }
	inline t3835026402** fag8() { return &f8; }
	inline void fs8(t3835026402* value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
