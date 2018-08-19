#ifndef FGETPOS_H
#define FGETPOS_H

#include "../object.h"

namespace n_fgetpos {
	class Cfgetpos :public Object
	{
	public:
		Cfgetpos();
		~Cfgetpos();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fgetpos;

#endif
