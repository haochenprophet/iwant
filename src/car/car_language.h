#ifndef CAR_LANGUAGE_H
#define CAR_LANGUAGE_H

#include "../object.h"

namespace n_car_language {
	class Ccar_language :public Object
	{
	public:
		Ccar_language();
		~Ccar_language();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_language); }
	};
}

using namespace n_car_language;

#endif
