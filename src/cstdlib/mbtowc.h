#ifndef MBTOWC_H
#define MBTOWC_H

#include "../object.h"

namespace n_mbtowc {
	class Cmbtowc :public Object
	{
	public:
		Cmbtowc();
		~Cmbtowc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_mbtowc;

#endif
