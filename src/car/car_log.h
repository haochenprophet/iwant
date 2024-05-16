#ifndef CAR_LOG_H
#define CAR_LOG_H

#include "object/object.h"

namespace n_car_log {
	class Ccar_log :public Object
	{
	public:
		Ccar_log();
		~Ccar_log();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_log); }
	};
}

using namespace n_car_log;

#endif
