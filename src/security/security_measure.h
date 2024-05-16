#ifndef SECURITY_MEASURE_H
#define SECURITY_MEASURE_H

#include "object/object.h"

namespace n_security_measure {
	class Csecurity_measure :public Object
	{
	public:
		Csecurity_measure();
		~Csecurity_measure();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_measure); }
	};
}

using namespace n_security_measure;

#endif
