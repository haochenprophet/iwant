#ifndef SETCC_H
#define SETCC_H

#include "object/object.h"

namespace n_SETcc {
	class CSETcc :public Object
	{
	public:
		CSETcc();
		~CSETcc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SETcc;

#endif
