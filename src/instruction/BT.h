#ifndef BT_H
#define BT_H

#include "../object.h"

namespace n_BT {
	class CBT :public Object
	{
	public:
		CBT();
		~CBT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BT;

#endif
