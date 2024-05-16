#ifndef PUSHF_H
#define PUSHF_H

#include "object/object.h"

namespace n_PUSHF {
	class CPUSHF :public Object
	{
	public:
		CPUSHF();
		~CPUSHF();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUSHF;

#endif
