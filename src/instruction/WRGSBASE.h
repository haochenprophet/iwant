#ifndef WRGSBASE_H
#define WRGSBASE_H

#include "object/object.h"

namespace n_WRGSBASE {
	class CWRGSBASE :public Object
	{
	public:
		CWRGSBASE();
		~CWRGSBASE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_WRGSBASE;

#endif
