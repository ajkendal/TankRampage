#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1312997718;
struct t1660208857;
struct t2235910900;

#include "t982283579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t541997719  : public t982283579
{
public:
	bool f15;

public:
	inline static int32_t fog15() { return static_cast<int32_t>(offsetof(t541997719, f15)); }
	inline bool fg15() const { return f15; }
	inline bool* fag15() { return &f15; }
	inline void fs15(bool value)
	{
		f15 = value;
	}
};

struct t541997719_SFs
{
public:
	t1312997718 * f12;
	t1312997718 * f13;
	t1660208857 * f14;
	t2235910900* f16;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t541997719_SFs, f12)); }
	inline t1312997718 * fg12() const { return f12; }
	inline t1312997718 ** fag12() { return &f12; }
	inline void fs12(t1312997718 * value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t541997719_SFs, f13)); }
	inline t1312997718 * fg13() const { return f13; }
	inline t1312997718 ** fag13() { return &f13; }
	inline void fs13(t1312997718 * value)
	{
		f13 = value;
		Il2CppCodeGenWriteBarrier(&f13, value);
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t541997719_SFs, f14)); }
	inline t1660208857 * fg14() const { return f14; }
	inline t1660208857 ** fag14() { return &f14; }
	inline void fs14(t1660208857 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}

	inline static int32_t fog16() { return static_cast<int32_t>(offsetof(t541997719_SFs, f16)); }
	inline t2235910900* fg16() const { return f16; }
	inline t2235910900** fag16() { return &f16; }
	inline void fs16(t2235910900* value)
	{
		f16 = value;
		Il2CppCodeGenWriteBarrier(&f16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
