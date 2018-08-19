#ifndef GETC_H
#define GETC_H

#include "../object.h"

namespace n_getc {
	class Cgetc :public Object
	{
	public:
		Cgetc();
		~Cgetc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_getc;

#endif
