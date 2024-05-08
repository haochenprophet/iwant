#ifndef TIMETREE_H
#define TIMETREE_H

#include "object.h"

namespace n_timetree {
	class Ctimetree :public Object
	{
	public:
		Ctimetree();
		~Ctimetree();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctimetree); }
	};
}

using namespace n_timetree;

#endif
