#ifndef CLI_H
#define CLI_H

#include "object/object.h"

namespace n_CLI {
	class CCLI :public Object
	{
	public:
		CCLI();
		~CCLI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CLI;

#endif
