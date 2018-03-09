#ifndef OUTS_H
#define OUTS_H

#include "../object.h"

namespace n_OUTS {
	class COUTS :public Object
	{
	public:
		COUTS();
		~COUTS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_OUTS;

#endif
