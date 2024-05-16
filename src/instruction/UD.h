#ifndef UD_H
#define UD_H

#include "object/object.h"

namespace n_UD {
	class CUD :public Object
	{
	public:
		CUD();
		~CUD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_UD;

#endif
