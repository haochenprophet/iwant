#ifndef TZCNT_H
#define TZCNT_H

#include "../object.h"

namespace n_TZCNT {
	class CTZCNT :public Object
	{
	public:
		CTZCNT();
		~CTZCNT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_TZCNT;

#endif
