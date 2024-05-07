#ifndef NAMESPACE_H
#define NAMESPACE_H

#include "../object.h"

namespace n_namespace {
	class Cnamespace :public Object
	{
	public:
		Cnamespace();
		int my_init(void *p=nullptr);
	};
}

using namespace n_namespace;

#endif
