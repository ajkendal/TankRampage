#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


struct t3893714978;

#include "Il2CppArray.h"
#include "t3893714978.h"
#include "t2011017009.h"

#pragma once
struct t2371362365  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t3893714978 * m_Items[1];

public:
	inline t3893714978 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t3893714978 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t3893714978 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
struct t1163649260  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
