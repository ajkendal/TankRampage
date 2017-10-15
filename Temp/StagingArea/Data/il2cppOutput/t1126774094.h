#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t2893864196.h"
#include "t465617798.h"
#include "t3562018171.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1126774094  : public t2893864196
{
public:
	t465617798  f2;
	int32_t f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1126774094, f2)); }
	inline t465617798  fg2() const { return f2; }
	inline t465617798 * fag2() { return &f2; }
	inline void fs2(t465617798  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1126774094, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
