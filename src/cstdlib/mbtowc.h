#ifndef MBTOWC_H
#define MBTOWC_H

#include "object/object.h"

namespace n_mbtowc {
	class Cmbtowc :public Object
	{
	public:
		Cmbtowc();
		~Cmbtowc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cmbtowc); }
		static int mbtowc_c(wchar_t* pwc, const char* pmb, size_t max);

	};
}

using namespace n_mbtowc;

#endif
