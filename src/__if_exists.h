#ifndef __IF_EXISTS_H
#define __IF_EXISTS_H

#include "object.h"

namespace n___if_exists {
	class C__if_exists :public Object
	{
	public:
		C__if_exists();
		int my_init(void *p=NULL);
	};
}

using namespace n___if_exists;

#endif
