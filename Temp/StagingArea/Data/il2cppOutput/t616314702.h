#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t1379178947.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t616314702  : public t1379178947
{
public:
	String_t* f11;

public:
	inline static int32_t fog11() { return static_cast<int32_t>(offsetof(t616314702, f11)); }
	inline String_t* fg11() const { return f11; }
	inline String_t** fag11() { return &f11; }
	inline void fs11(String_t* value)
	{
		f11 = value;
		Il2CppCodeGenWriteBarrier(&f11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
