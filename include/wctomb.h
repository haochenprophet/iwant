#ifndef WCTOMB_H
#define WCTOMB_H

#include "../object.h"

namespace n_wctomb {
	class Cwctomb :public Object
	{
	public:
		Cwctomb();
		~Cwctomb();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cwctomb); }
		static int wctomb_c(char* pmb, wchar_t wc);

	};
}

using namespace n_wctomb;

#endif
