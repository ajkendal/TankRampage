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


struct t709180306;
struct t709180306_marshaled;

extern "C" void t709180306_marshal(const t709180306& unmarshaled, t709180306_marshaled& marshaled);
extern "C" void t709180306_marshal_back(const t709180306_marshaled& marshaled, t709180306& unmarshaled);
extern "C" void t709180306_marshal_cleanup(t709180306_marshaled& marshaled);
