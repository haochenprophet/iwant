#ifndef CAR_GUI_H
#define CAR_GUI_H

#include "object/object.h"

namespace n_car_gui {
	class Ccar_gui :public Object
	{
	public:
		Ccar_gui();
		~Ccar_gui();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_gui); }
	};
}

using namespace n_car_gui;

#endif
