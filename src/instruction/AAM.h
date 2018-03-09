#ifndef AAM_H
#define AAM_H

#include "../object.h"

namespace n_AAM {
	class CAAM :public Object
	{
	public:
		CAAM();
		~CAAM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AAM;

#endif
