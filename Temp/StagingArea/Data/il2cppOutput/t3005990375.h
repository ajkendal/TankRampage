#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t4080263048.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3005990375  : public t4080263048
{
public:
	String_t* f11;
	String_t* f12;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t3005990375, f11)); }
	inline String_t* fg11() const { return f11; }
	inline String_t** fag11() { return &f11; }
	inline void fs11(String_t* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}

	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t3005990375, f12)); }
	inline String_t* fg12() const { return f12; }
	inline String_t** fag12() { return &f12; }
	inline void fs12(String_t* value)
	{
		f12 = value;
		Il2CppCodeGenWriteBarrier(&f12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
