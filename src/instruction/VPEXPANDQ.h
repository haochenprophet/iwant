#ifndef VPEXPANDQ_H
#define VPEXPANDQ_H

#include "../object.h"

namespace n_VPEXPANDQ {
	class CVPEXPANDQ :public Object
	{
	public:
		CVPEXPANDQ();
		~CVPEXPANDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPEXPANDQ;

#endif
