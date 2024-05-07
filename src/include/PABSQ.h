#ifndef PABSQ_H
#define PABSQ_H

#include "../object.h"

namespace n_PABSQ {
	class CPABSQ :public Object
	{
	public:
		CPABSQ();
		~CPABSQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PABSQ;

#endif
