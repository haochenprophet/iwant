#ifndef PDEP_H
#define PDEP_H

#include "../object.h"

namespace n_PDEP {
	class CPDEP :public Object
	{
	public:
		CPDEP();
		~CPDEP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PDEP;

#endif
