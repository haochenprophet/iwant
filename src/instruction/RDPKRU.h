#ifndef RDPKRU_H
#define RDPKRU_H

#include "object.h"

namespace n_RDPKRU {
	class CRDPKRU :public Object
	{
	public:
		CRDPKRU();
		~CRDPKRU();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDPKRU;

#endif
