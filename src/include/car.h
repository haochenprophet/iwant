#ifndef CAR_H
#define CAR_H

#include "../object.h"

namespace n_car {
	class Ccar :public Object
	{
	public:
		Ccar();
		~Ccar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar); }
	};
}

using namespace n_car;

#endif
