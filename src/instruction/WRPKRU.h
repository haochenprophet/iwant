#ifndef WRPKRU_H
#define WRPKRU_H

#include "object/object.h"

namespace n_WRPKRU {
	class CWRPKRU :public Object
	{
	public:
		CWRPKRU();
		~CWRPKRU();
		int my_init(void *p=nullptr);
	};
}

using namespace n_WRPKRU;

#endif
