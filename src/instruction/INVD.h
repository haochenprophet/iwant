#ifndef INVD_H
#define INVD_H

#include "object.h"

namespace n_INVD {
	class CINVD :public Object
	{
	public:
		CINVD();
		~CINVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INVD;

#endif
