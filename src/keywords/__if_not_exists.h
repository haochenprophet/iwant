#ifndef __IF_NOT_EXISTS_H
#define __IF_NOT_EXISTS_H

#include "object.h"

namespace n___if_not_exists {
	class C__if_not_exists :public Object
	{
	public:
		C__if_not_exists();
		int my_init(void *p=nullptr);
	};
}

using namespace n___if_not_exists;

#endif
