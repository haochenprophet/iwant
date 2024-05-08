#ifndef __LEAVE_H
#define __LEAVE_H

#include "../object.h"

namespace n___leave {
	class C__leave :public Object
	{
	public:
		C__leave();
		int my_init(void *p=nullptr);
	};
}

using namespace n___leave;

#endif
