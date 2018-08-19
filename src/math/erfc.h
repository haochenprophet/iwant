#ifndef ERFC_H
#define ERFC_H

#include "../object.h"

namespace n_erfc {
	class Cerfc :public Object
	{
	public:
		Cerfc();
		~Cerfc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_erfc;

#endif
