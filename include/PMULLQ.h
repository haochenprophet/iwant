#ifndef PMULLQ_H
#define PMULLQ_H

#include "../object.h"

namespace n_PMULLQ {
	class CPMULLQ :public Object
	{
	public:
		CPMULLQ();
		~CPMULLQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMULLQ;

#endif
