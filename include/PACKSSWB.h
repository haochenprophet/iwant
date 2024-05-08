#ifndef PACKSSWB_H
#define PACKSSWB_H

#include "../object.h"

namespace n_PACKSSWB {
	class CPACKSSWB :public Object
	{
	public:
		CPACKSSWB();
		~CPACKSSWB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PACKSSWB;

#endif
