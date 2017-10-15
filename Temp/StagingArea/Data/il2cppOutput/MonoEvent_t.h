#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "EventInfo_t.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  MonoEvent_t  : public EventInfo_t
{
public:
	IntPtr_t f1;
	IntPtr_t f2;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(MonoEvent_t, f1)); }
	inline IntPtr_t fg1() const { return f1; }
	inline IntPtr_t* fag1() { return &f1; }
	inline void fs1(IntPtr_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(MonoEvent_t, f2)); }
	inline IntPtr_t fg2() const { return f2; }
	inline IntPtr_t* fag2() { return &f2; }
	inline void fs2(IntPtr_t value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
