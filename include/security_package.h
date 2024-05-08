#ifndef SECURITY_PACKAGE_H
#define SECURITY_PACKAGE_H

#include "../object.h"

namespace n_security_package {
	class Csecurity_package :public Object
	{
	public:
		Csecurity_package();
		~Csecurity_package();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_package); }
	};
}

using namespace n_security_package;

#endif
