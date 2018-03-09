#ifndef VPMOVSQW_H
#define VPMOVSQW_H

#include "../object.h"

namespace n_VPMOVSQW {
	class CVPMOVSQW :public Object
	{
	public:
		CVPMOVSQW();
		~CVPMOVSQW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVSQW;

#endif
