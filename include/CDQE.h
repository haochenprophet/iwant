#ifndef CDQE_H
#define CDQE_H

#include "../object.h"

namespace n_CDQE {
	class CCDQE :public Object
	{
	public:
		CCDQE();
		~CCDQE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CDQE;

#endif
