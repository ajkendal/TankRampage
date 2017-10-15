#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1312997718;
struct t1940822727;

#include "t435725946.h"
#include "t1834055012.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1108503962  : public t435725946
{
public:
	String_t* f1;
	String_t* f2;
	t1312997718 * f3;
	int64_t f4;
	t1834055012  f5;
	t1834055012  f6;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1108503962, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1108503962, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1108503962, f3)); }
	inline t1312997718 * fg3() const { return f3; }
	inline t1312997718 ** fag3() { return &f3; }
	inline void fs3(t1312997718 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1108503962, f4)); }
	inline int64_t fg4() const { return f4; }
	inline int64_t* fag4() { return &f4; }
	inline void fs4(int64_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1108503962, f5)); }
	inline t1834055012  fg5() const { return f5; }
	inline t1834055012 * fag5() { return &f5; }
	inline void fs5(t1834055012  value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1108503962, f6)); }
	inline t1834055012  fg6() const { return f6; }
	inline t1834055012 * fag6() { return &f6; }
	inline void fs6(t1834055012  value)
	{
		f6 = value;
	}
};

struct t1108503962_SFs
{
public:
	int32_t f7;
	t1940822727 * f8;

public:
	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1108503962_SFs, f7)); }
	inline int32_t fg7() const { return f7; }
	inline int32_t* fag7() { return &f7; }
	inline void fs7(int32_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1108503962_SFs, f8)); }
	inline t1940822727 * fg8() const { return f8; }
	inline t1940822727 ** fag8() { return &f8; }
	inline void fs8(t1940822727 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
