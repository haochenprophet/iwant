#ifndef VPCMPUW_H
#define VPCMPUW_H

#include "../object.h"

namespace n_VPCMPUW {
	class CVPCMPUW :public Object
	{
	public:
		CVPCMPUW();
		~CVPCMPUW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCMPUW;

#endif
