#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1189809773;

#include "t2768948945.h"
#include "t3159480569.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1964584666  : public t2768948945
{
public:
	int64_t f1;
	bool f2;
	int64_t f3;
	int32_t f4;
	IntPtr_t f5;
	int64_t f6;
	int64_t f7;
	t1189809773 * f8;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1964584666, f1)); }
	inline int64_t fg1() const { return f1; }
	inline int64_t* fag1() { return &f1; }
	inline void fs1(int64_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1964584666, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1964584666, f3)); }
	inline int64_t fg3() const { return f3; }
	inline int64_t* fag3() { return &f3; }
	inline void fs3(int64_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1964584666, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1964584666, f5)); }
	inline IntPtr_t fg5() const { return f5; }
	inline IntPtr_t* fag5() { return &f5; }
	inline void fs5(IntPtr_t value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1964584666, f6)); }
	inline int64_t fg6() const { return f6; }
	inline int64_t* fag6() { return &f6; }
	inline void fs6(int64_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1964584666, f7)); }
	inline int64_t fg7() const { return f7; }
	inline int64_t* fag7() { return &f7; }
	inline void fs7(int64_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1964584666, f8)); }
	inline t1189809773 * fg8() const { return f8; }
	inline t1189809773 ** fag8() { return &f8; }
	inline void fs8(t1189809773 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
