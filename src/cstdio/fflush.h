#ifndef FFLUSH_H
#define FFLUSH_H

#include "../object.h"

namespace n_fflush {
	class Cfflush :public Object
	{
	public:
		Cfflush();
		~Cfflush();
		int my_init(void *p=nullptr);
	};
}

using namespace n_fflush;

#endif
