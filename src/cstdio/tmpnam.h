#ifndef TMPNAM_H
#define TMPNAM_H

#include "../object.h"

namespace n_tmpnam {
	class Ctmpnam :public Object
	{
	public:
		Ctmpnam();
		~Ctmpnam();
		int my_init(void *p=nullptr);
	};
}

using namespace n_tmpnam;

#endif
