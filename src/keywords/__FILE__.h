#ifndef __FILE___H
#define __FILE___H

#include "object/object.h"

namespace n___FILE__ {
	class C__FILE__ :public Object
	{
	public:
		C__FILE__();
		int my_init(void *p=nullptr);
	};
}

using namespace n___FILE__;

#endif
