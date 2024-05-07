#ifndef __TRY__EXCEPT_H
#define __TRY__EXCEPT_H

#include "../object.h"

namespace n___try__except {
	class C__try__except :public Object
	{
	public:
		C__try__except();
		int my_init(void *p=nullptr);
	};
}

using namespace n___try__except;

#endif
