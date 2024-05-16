#ifndef CAR_FILE_H
#define CAR_FILE_H

#include "object/object.h"

namespace n_car_file {
	class Ccar_file :public Object
	{
	public:
		Ccar_file();
		~Ccar_file();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_file); }
	};
}

using namespace n_car_file;

#endif
