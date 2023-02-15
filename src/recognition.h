#ifndef RECOGNITION_H
#define RECOGNITION_H

#include "object.h"

namespace n_recognition {
	class Crecognition :public Object
	{
	public:
		Crecognition();
		~Crecognition();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crecognition); }
	};
}

using namespace n_recognition;

#endif
