#ifndef UNGETC_H
#define UNGETC_H

#include "../object.h"

namespace n_ungetc {
	class Cungetc :public Object
	{
	public:
		Cungetc();
		~Cungetc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ungetc;

#endif
