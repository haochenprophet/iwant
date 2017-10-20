#ifndef VPMOVM2Q_H
#define VPMOVM2Q_H

#include "object.h"

namespace n_VPMOVM2Q {
	class CVPMOVM2Q :public Object
	{
	public:
		CVPMOVM2Q();
		~CVPMOVM2Q();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVM2Q;

#endif
