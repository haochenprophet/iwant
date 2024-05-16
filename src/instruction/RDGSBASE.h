#ifndef RDGSBASE_H
#define RDGSBASE_H

#include "object/object.h"

namespace n_RDGSBASE {
	class CRDGSBASE :public Object
	{
	public:
		CRDGSBASE();
		~CRDGSBASE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDGSBASE;

#endif
