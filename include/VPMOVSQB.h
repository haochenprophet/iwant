#ifndef VPMOVSQB_H
#define VPMOVSQB_H

#include "../object.h"

namespace n_VPMOVSQB {
	class CVPMOVSQB :public Object
	{
	public:
		CVPMOVSQB();
		~CVPMOVSQB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVSQB;

#endif
