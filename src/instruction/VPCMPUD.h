#ifndef VPCMPUD_H
#define VPCMPUD_H

#include "object/object.h"

namespace n_VPCMPUD {
	class CVPCMPUD :public Object
	{
	public:
		CVPCMPUD();
		~CVPCMPUD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPCMPUD;

#endif
