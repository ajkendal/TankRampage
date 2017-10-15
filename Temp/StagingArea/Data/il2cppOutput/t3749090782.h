#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1076071497;
struct t3835026402;

#include "t726134100.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3749090782  : public t726134100
{
public:
	uint16_t f12;
	uint16_t f13;
	uint16_t f14;
	uint16_t f15;
	t1076071497* f16;
	int32_t f17;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t3749090782, f12)); }
	inline uint16_t fg12() const { return f12; }
	inline uint16_t* fag12() { return &f12; }
	inline void fs12(uint16_t value)
	{
		f12 = value;
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t3749090782, f13)); }
	inline uint16_t fg13() const { return f13; }
	inline uint16_t* fag13() { return &f13; }
	inline void fs13(uint16_t value)
	{
		f13 = value;
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t3749090782, f14)); }
	inline uint16_t fg14() const { return f14; }
	inline uint16_t* fag14() { return &f14; }
	inline void fs14(uint16_t value)
	{
		f14 = value;
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t3749090782, f15)); }
	inline uint16_t fg15() const { return f15; }
	inline uint16_t* fag15() { return &f15; }
	inline void fs15(uint16_t value)
	{
		f15 = value;
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t3749090782, f16)); }
	inline t1076071497* fg16() const { return f16; }
	inline t1076071497** fag16() { return &f16; }
	inline void fs16(t1076071497* value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}

	inline static int32_t fog17() { return static_cast<int32_t>(offsetof(t3749090782, f17)); }
	inline int32_t fg17() const { return f17; }
	inline int32_t* fag17() { return &f17; }
	inline void fs17(int32_t value)
	{
		f17 = value;
	}
};

struct t3749090782_SFs
{
public:
	t3835026402* f18;

public:
	inline static int32_t fog18() { return static_cast<int32_t>(offsetof(t3749090782_SFs, f18)); }
	inline t3835026402* fg18() const { return f18; }
	inline t3835026402** fag18() { return &f18; }
	inline void fs18(t3835026402* value)
	{
		f18 = value;
		Il2CppCodeGenWriteBarrier(&f18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
