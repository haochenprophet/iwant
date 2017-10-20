#ifndef BSF_H
#define BSF_H

#include "object.h"

namespace n_BSF {
	class CBSF :public Object
	{
	public:
		CBSF();
		~CBSF();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BSF;

#endif
