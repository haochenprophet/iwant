#ifndef VPMOVM2W_H
#define VPMOVM2W_H

#include "object.h"

namespace n_VPMOVM2W {
	class CVPMOVM2W :public Object
	{
	public:
		CVPMOVM2W();
		~CVPMOVM2W();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVM2W;

#endif
