#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2012322125;
struct t2731230150;

#include "t2777156203.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1542668002  : public t2777156203
{
public:
	t2012322125 * f2;
	bool f3;
	bool f4;
	bool f5;
	bool f6;
	t2731230150 * f7;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1542668002, f2)); }
	inline t2012322125 * fg2() const { return f2; }
	inline t2012322125 ** fag2() { return &f2; }
	inline void fs2(t2012322125 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1542668002, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1542668002, f4)); }
	inline bool fg4() const { return f4; }
	inline bool* fag4() { return &f4; }
	inline void fs4(bool value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1542668002, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1542668002, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1542668002, f7)); }
	inline t2731230150 * fg7() const { return f7; }
	inline t2731230150 ** fag7() { return &f7; }
	inline void fs7(t2731230150 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

struct t1542668002_SFs
{
public:
	bool f8;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1542668002_SFs, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
