#ifndef MAIN_H
#define MAIN_H

#include "object.h"

namespace n_main {
	class Cmain :public Object
	{
	public:
		Cmain();
		int my_init(void *p=NULL);
	};

}
using namespace n_main;

#endif