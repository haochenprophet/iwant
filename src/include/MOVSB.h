#ifndef MOVSB_H
#define MOVSB_H

#include "../object.h"

namespace n_MOVSB {
	class CMOVSB :public Object
	{
	public:
		CMOVSB();
		~CMOVSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSB;

#endif
