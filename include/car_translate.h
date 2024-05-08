#ifndef CAR_TRANSLATE_H
#define CAR_TRANSLATE_H

#include "../object.h"

namespace n_car_translate {
	class Ccar_translate :public Object
	{
	public:
		Ccar_translate();
		~Ccar_translate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_translate); }
	};
}

using namespace n_car_translate;

#endif
