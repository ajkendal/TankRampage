#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


struct t337311165;
struct t2901181876;

#include "Il2CppArray.h"
#include "t304215260.h"
#include "t337311165.h"
#include "t2901181876.h"
#include "t1456433074.h"
#include "t2756911945.h"

#pragma once
struct t785887285  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t304215260  m_Items[1];

public:
	inline t304215260  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t304215260 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t304215260  value)
	{
		m_Items[index] = value;
	}
};
struct t3911439024  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t337311165 * m_Items[1];

public:
	inline t337311165 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t337311165 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t337311165 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
struct t3703195901  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t2901181876 * m_Items[1];

public:
	inline t2901181876 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t2901181876 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t2901181876 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
struct t1054890311  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t1456433074  m_Items[1];

public:
	inline t1456433074  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t1456433074 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t1456433074  value)
	{
		m_Items[index] = value;
	}
};
struct t2696765812  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t2756911945  m_Items[1];

public:
	inline t2756911945  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t2756911945 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t2756911945  value)
	{
		m_Items[index] = value;
	}
};
