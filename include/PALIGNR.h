#ifndef PALIGNR_H
#define PALIGNR_H

#include "../object.h"

namespace n_PALIGNR {
	class CPALIGNR :public Object
	{
	public:
		CPALIGNR();
		~CPALIGNR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PALIGNR;

#endif
