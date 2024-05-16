#ifndef MARS_IMAGE_H
#define MARS_IMAGE_H

#include "object/object.h"

namespace n_mars_image {
	class Cmars_image :public Object
	{
	public:
		Cmars_image();
		~Cmars_image();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_image); }
	};
}

using namespace n_mars_image;

#endif
