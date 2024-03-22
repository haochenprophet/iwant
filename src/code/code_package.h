#ifndef CODE_PACKAGE_H
#define CODE_PACKAGE_H

#include "../object.h"

namespace n_code_package {
	class Ccode_package :public Object
	{
	public:
		Ccode_package();
		~Ccode_package();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_package); }
	};
}

using namespace n_code_package;

#endif
