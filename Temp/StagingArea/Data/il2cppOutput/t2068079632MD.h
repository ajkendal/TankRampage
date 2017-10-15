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


struct t2068079632;
struct t2068079632_marshaled;

extern "C" void t2068079632_marshal(const t2068079632& unmarshaled, t2068079632_marshaled& marshaled);
extern "C" void t2068079632_marshal_back(const t2068079632_marshaled& marshaled, t2068079632& unmarshaled);
extern "C" void t2068079632_marshal_cleanup(t2068079632_marshaled& marshaled);
