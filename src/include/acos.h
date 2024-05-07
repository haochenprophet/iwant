#ifndef ACOS_H
#define ACOS_H

#include "../object.h"

namespace n_acos {
	class Cacos :public Object
	{
	public:
		Cacos();
		~Cacos();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cacos); }
		static double acos_c(double x);
	};
}

using namespace n_acos;

#endif
