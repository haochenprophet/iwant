#ifndef SECURITY_IMAGE_H
#define SECURITY_IMAGE_H

#include "object/object.h"

namespace n_security_image {
	class Csecurity_image :public Object
	{
	public:
		Csecurity_image();
		~Csecurity_image();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_image); }
	};
}

using namespace n_security_image;

#endif
