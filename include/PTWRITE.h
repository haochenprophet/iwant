#ifndef PTWRITE_H
#define PTWRITE_H

#include "../object.h"

namespace n_PTWRITE {
	class CPTWRITE :public Object
	{
	public:
		CPTWRITE();
		~CPTWRITE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PTWRITE;

#endif
