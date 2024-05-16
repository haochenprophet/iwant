#ifndef MATERIEL_IMAGE_H
#define MATERIEL_IMAGE_H

#include "object/object.h"

namespace n_materiel_image {
	class Cmateriel_image :public Object
	{
	public:
		Cmateriel_image();
		~Cmateriel_image();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_image); }
	};
}

using namespace n_materiel_image;

#endif
