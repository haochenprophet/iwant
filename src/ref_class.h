#ifndef REF_CLASS_H
#define REF_CLASS_H

#include "object.h"

namespace n_ref_class {
	class Cref_class :public Object
	{
	public:
		Cref_class();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ref_class;

#endif
