#ifndef CAR_GO_H
#define CAR_GO_H

#include "object/object.h"

namespace n_car_go {
	class Ccar_go :public Object
	{
	public:
		Ccar_go();
		~Ccar_go();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_go); }
	};
}

using namespace n_car_go;

#endif
