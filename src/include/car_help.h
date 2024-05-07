#ifndef CAR_HELP_H
#define CAR_HELP_H

#include "../object.h"

namespace n_car_help {
	class Ccar_help :public Object
	{
	public:
		Ccar_help();
		~Ccar_help();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_help); }
	};
}

using namespace n_car_help;

#endif
