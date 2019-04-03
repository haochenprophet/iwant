#ifndef IO_H
#define IO_H

#include "../object.h"

namespace n_io {
	class Cio :public Object
	{
	public:
		Cio();
		~Cio();
		int my_init(void *p=nullptr);
	};
}

using namespace n_io;

#endif
