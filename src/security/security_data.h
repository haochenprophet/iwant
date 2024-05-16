#ifndef SECURITY_DATA_H
#define SECURITY_DATA_H

#include "object/object.h"

namespace n_security_data {
	class Csecurity_data :public Object
	{
	public:
		Csecurity_data();
		~Csecurity_data();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_data); }
	};
}

using namespace n_security_data;

#endif
