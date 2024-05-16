#ifndef RDFSBASE_H
#define RDFSBASE_H

#include "object/object.h"

namespace n_RDFSBASE {
	class CRDFSBASE :public Object
	{
	public:
		CRDFSBASE();
		~CRDFSBASE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDFSBASE;

#endif
