#ifndef REF_STRUCT_H
#define REF_STRUCT_H

#include "object.h"

namespace n_ref_struct {
	class Cref_struct :public Object
	{
	public:
		Cref_struct();
		int my_init(void *p=NULL);
	};
}

using namespace n_ref_struct;

#endif
