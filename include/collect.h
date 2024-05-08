#ifndef COLLECT_H
#define COLLECT_H

#include "../object.h"

namespace n_collect {
	class Ccollect :public Object
	{
	public:
		Ccollect();
		~Ccollect();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccollect); }
	};
}

using namespace n_collect;

#endif
