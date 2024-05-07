#ifndef PABSB_H
#define PABSB_H

#include "../object.h"

namespace n_PABSB {
	class CPABSB :public Object
	{
	public:
		CPABSB();
		~CPABSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PABSB;

#endif
