#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "../object.h"

namespace n_airplane {
	class Cairplane :public Object
	{
	public:
		Cairplane();
		~Cairplane();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane); }
	};
}

using namespace n_airplane;

#endif
