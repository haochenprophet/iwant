#ifndef CLEARERR_H
#define CLEARERR_H

#include "../object.h"

namespace n_clearerr {
	class Cclearerr :public Object
	{
	public:
		Cclearerr();
		~Cclearerr();
		int my_init(void *p=nullptr);
	};
}

using namespace n_clearerr;

#endif
