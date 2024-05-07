#ifndef PSRLW_H
#define PSRLW_H

#include "../object.h"

namespace n_PSRLW {
	class CPSRLW :public Object
	{
	public:
		CPSRLW();
		~CPSRLW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSRLW;

#endif
