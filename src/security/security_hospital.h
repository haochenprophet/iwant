#ifndef SECURITY_HOSPITAL_H
#define SECURITY_HOSPITAL_H

#include "object/object.h"

namespace n_security_hospital {
	class Csecurity_hospital :public Object
	{
	public:
		Csecurity_hospital();
		~Csecurity_hospital();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_hospital); }
	};
}

using namespace n_security_hospital;

#endif
