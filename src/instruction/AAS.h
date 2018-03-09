#ifndef AAS_H
#define AAS_H

#include "../object.h"

namespace n_AAS {
	class CAAS :public Object
	{
	public:
		CAAS();
		~CAAS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AAS;

#endif
