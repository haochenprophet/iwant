#ifndef VPMOVM2B_H
#define VPMOVM2B_H

#include "../object.h"

namespace n_VPMOVM2B {
	class CVPMOVM2B :public Object
	{
	public:
		CVPMOVM2B();
		~CVPMOVM2B();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMOVM2B;

#endif
