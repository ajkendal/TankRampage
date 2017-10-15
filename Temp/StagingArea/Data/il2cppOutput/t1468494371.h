#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3632007997;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1468494371  : public Il2CppObject
{
public:
	int32_t f1;
	t3632007997* f2;
	int32_t f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1468494371, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1468494371, f2)); }
	inline t3632007997* fg2() const { return f2; }
	inline t3632007997** fag2() { return &f2; }
	inline void fs2(t3632007997* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1468494371, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

struct t1468494371_SFs
{
public:
	t3632007997* f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1468494371_SFs, f4)); }
	inline t3632007997* fg4() const { return f4; }
	inline t3632007997** fag4() { return &f4; }
	inline void fs4(t3632007997* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
