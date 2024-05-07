#ifndef STRXFRM_H
#define STRXFRM_H

#include "../object.h"

namespace n_strxfrm {
	class Cstrxfrm :public Object
	{
	public:
		Cstrxfrm();
		~Cstrxfrm();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strxfrm;

#endif
