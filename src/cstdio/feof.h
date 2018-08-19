#ifndef FEOF_H
#define FEOF_H

#include "../object.h"

namespace n_feof {
	class Cfeof :public Object
	{
	public:
		Cfeof();
		~Cfeof();
		int my_init(void *p=nullptr);
	};
}

using namespace n_feof;

#endif
