#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1541254028;
struct String_t;
struct t3821180305;
struct t2197338622;
struct t506811400;

#include "t3021215747.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3921196294  : public t3021215747
{
public:
	t1541254028 * f28;
	String_t* f29;
	t3821180305 * f30;
	t3821180305 * f31;
	bool f33;
	t506811400* f34;

public:
	inline static int32_t fog28() { return static_cast<int32_t>(offsetof(t3921196294, f28)); }
	inline t1541254028 * fg28() const { return f28; }
	inline t1541254028 ** fag28() { return &f28; }
	inline void fs28(t1541254028 * value)
	{
		f28 = value;
		Il2CppCodeGenWriteBarrier(&f28, value);
	}

	inline static int32_t fog29() { return static_cast<int32_t>(offsetof(t3921196294, f29)); }
	inline String_t* fg29() const { return f29; }
	inline String_t** fag29() { return &f29; }
	inline void fs29(String_t* value)
	{
		f29 = value;
		Il2CppCodeGenWriteBarrier(&f29, value);
	}

	inline static int32_t fog30() { return static_cast<int32_t>(offsetof(t3921196294, f30)); }
	inline t3821180305 * fg30() const { return f30; }
	inline t3821180305 ** fag30() { return &f30; }
	inline void fs30(t3821180305 * value)
	{
		f30 = value;
		Il2CppCodeGenWriteBarrier(&f30, value);
	}

	inline static int32_t fog31() { return static_cast<int32_t>(offsetof(t3921196294, f31)); }
	inline t3821180305 * fg31() const { return f31; }
	inline t3821180305 ** fag31() { return &f31; }
	inline void fs31(t3821180305 * value)
	{
		f31 = value;
		Il2CppCodeGenWriteBarrier(&f31, value);
	}

	inline static int32_t fog33() { return static_cast<int32_t>(offsetof(t3921196294, f33)); }
	inline bool fg33() const { return f33; }
	inline bool* fag33() { return &f33; }
	inline void fs33(bool value)
	{
		f33 = value;
	}

	inline static int32_t fog34() { return static_cast<int32_t>(offsetof(t3921196294, f34)); }
	inline t506811400* fg34() const { return f34; }
	inline t506811400** fag34() { return &f34; }
	inline void fs34(t506811400* value)
	{
		f34 = value;
		Il2CppCodeGenWriteBarrier(&f34, value);
	}
};

struct t3921196294_SFs
{
public:
	t2197338622 * f32;

public:
	inline static int32_t fog32() { return static_cast<int32_t>(offsetof(t3921196294_SFs, f32)); }
	inline t2197338622 * fg32() const { return f32; }
	inline t2197338622 ** fag32() { return &f32; }
	inline void fs32(t2197338622 * value)
	{
		f32 = value;
		Il2CppCodeGenWriteBarrier(&f32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
