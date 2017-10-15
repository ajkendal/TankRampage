#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "t963149831.h"
#include "t465617797.h"

extern "C"  t465617797  m371381516 (t963149831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t963149831;
struct t963149831_marshaled;

extern "C" void t963149831_marshal(const t963149831& unmarshaled, t963149831_marshaled& marshaled);
extern "C" void t963149831_marshal_back(const t963149831_marshaled& marshaled, t963149831& unmarshaled);
extern "C" void t963149831_marshal_cleanup(t963149831_marshaled& marshaled);
