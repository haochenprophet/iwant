#ifndef CMOVCC_H
#define CMOVCC_H

#include "object/object.h"

namespace n_CMOVcc {
	class CCMOVcc :public Object
	{
	public:
		CCMOVcc();
		~CCMOVcc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMOVcc;

#endif
