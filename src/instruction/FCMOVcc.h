#ifndef FCMOVCC_H
#define FCMOVCC_H

#include "object/object.h"

namespace n_FCMOVcc {
	class CFCMOVcc :public Object
	{
	public:
		CFCMOVcc();
		~CFCMOVcc();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCMOVcc;

#endif
