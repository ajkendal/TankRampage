#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2003179150;
struct String_t;

#include "Il2CppObject.h"
#include "t1067463710.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3101482773  : public Il2CppObject
{
public:
	t2003179150 * f0;
	uint16_t f1;
	int32_t f2;
	String_t* f3;
	int32_t f4;
	bool f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3101482773, f0)); }
	inline t2003179150 * fg0() const { return f0; }
	inline t2003179150 ** fag0() { return &f0; }
	inline void fs0(t2003179150 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3101482773, f1)); }
	inline uint16_t fg1() const { return f1; }
	inline uint16_t* fag1() { return &f1; }
	inline void fs1(uint16_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3101482773, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3101482773, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3101482773, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3101482773, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
