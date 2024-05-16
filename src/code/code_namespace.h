#ifndef CODE_NAMESPACE_H
#define CODE_NAMESPACE_H

#include "object/object.h"

namespace n_code_namespace {
	class Ccode_namespace :public Object
	{
	public:
		Ccode_namespace();
		~Ccode_namespace();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_namespace); }
	};
}

using namespace n_code_namespace;

#endif
