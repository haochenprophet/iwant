#ifndef SAHF_H
#define SAHF_H

#include "object/object.h"

namespace n_SAHF {
	class CSAHF :public Object
	{
	public:
		CSAHF();
		~CSAHF();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SAHF;

#endif
