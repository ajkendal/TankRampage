#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4041146298.h"
#include "t465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3446738032  : public t4041146298
{
public:
	t465617798  f12;
	t465617798  f13;
	bool f14;

public:
	inline static int32_t fog12() { return static_cast<int32_t>(offsetof(t3446738032, f12)); }
	inline t465617798  fg12() const { return f12; }
	inline t465617798 * fag12() { return &f12; }
	inline void fs12(t465617798  value)
	{
		f12 = value;
	}

	inline static int32_t fog13() { return static_cast<int32_t>(offsetof(t3446738032, f13)); }
	inline t465617798  fg13() const { return f13; }
	inline t465617798 * fag13() { return &f13; }
	inline void fs13(t465617798  value)
	{
		f13 = value;
	}

	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t3446738032, f14)); }
	inline bool fg14() const { return f14; }
	inline bool* fag14() { return &f14; }
	inline void fs14(bool value)
	{
		f14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
