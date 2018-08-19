#ifndef FERROR_H
#define FERROR_H

#include "../object.h"

namespace n_ferror {
	class Cferror :public Object
	{
	public:
		Cferror();
		~Cferror();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ferror;

#endif
