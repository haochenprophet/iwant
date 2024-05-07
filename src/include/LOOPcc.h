#ifndef LOOPCC_H
#define LOOPCC_H

#include "../object.h"

namespace n_LOOPcc {
	class CLOOPcc :public Object
	{
	public:
		CLOOPcc();
		~CLOOPcc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LOOPcc;

#endif
