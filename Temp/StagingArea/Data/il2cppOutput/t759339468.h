#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2031605577;
struct t2210175605;
struct Type_t;
struct t2729163191;

#include "t141003736.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t759339468  : public t141003736
{
public:
	t2031605577* f10;
	t2210175605* f11;
	Type_t * f12;
	Type_t * f13;
	Type_t * f14;
	t2729163191 * f15;
	bool f16;

public:
	inline static int32_t fog10() { return static_cast<int32_t>(offsetof(t759339468, f10)); }
	inline t2031605577* fg10() const { return f10; }
	inline t2031605577** fag10() { return &f10; }
	inline void fs10(t2031605577* value)
	{
		f10 = value;
		Il2CppCodeGenWriteBarrier(&f10, value);
	}

	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t759339468, f11)); }
	inline t2210175605* fg11() const { return f11; }
	inline t2210175605** fag11() { return &f11; }
	inline void fs11(t2210175605* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t759339468, f12)); }
	inline Type_t * fg12() const { return f12; }
	inline Type_t ** fag12() { return &f12; }
	inline void fs12(Type_t * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t759339468, f13)); }
	inline Type_t * fg13() const { return f13; }
	inline Type_t ** fag13() { return &f13; }
	inline void fs13(Type_t * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t759339468, f14)); }
	inline Type_t * fg14() const { return f14; }
	inline Type_t ** fag14() { return &f14; }
	inline void fs14(Type_t * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t759339468, f15)); }
	inline t2729163191 * fg15() const { return f15; }
	inline t2729163191 ** fag15() { return &f15; }
	inline void fs15(t2729163191 * value)
	{
		f15 = value;
		Il2CppCodeGenWriteBarrier(&f15, value);
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t759339468, f16)); }
	inline bool fg16() const { return f16; }
	inline bool* fag16() { return &f16; }
	inline void fs16(bool value)
	{
		f16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
