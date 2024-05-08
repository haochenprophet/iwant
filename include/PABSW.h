#ifndef PABSW_H
#define PABSW_H

#include "../object.h"

namespace n_PABSW {
	class CPABSW :public Object
	{
	public:
		CPABSW();
		~CPABSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PABSW;

#endif
