#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3835026402;
struct t1468494371;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2605720235  : public Il2CppObject
{
public:
	uint8_t f0;
	t3835026402* f1;
	t1468494371 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2605720235, f0)); }
	inline uint8_t fg0() const { return f0; }
	inline uint8_t* fag0() { return &f0; }
	inline void fs0(uint8_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2605720235, f1)); }
	inline t3835026402* fg1() const { return f1; }
	inline t3835026402** fag1() { return &f1; }
	inline void fs1(t3835026402* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2605720235, f2)); }
	inline t1468494371 * fg2() const { return f2; }
	inline t1468494371 ** fag2() { return &f2; }
	inline void fs2(t1468494371 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
