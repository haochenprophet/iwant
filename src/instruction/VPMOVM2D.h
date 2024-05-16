#ifndef VPMOVM2D_H
#define VPMOVM2D_H

#include "object/object.h"

namespace n_VPMOVM2D {
	class CVPMOVM2D :public Object
	{
	public:
		CVPMOVM2D();
		~CVPMOVM2D();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVM2D;

#endif
