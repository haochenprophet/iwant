#ifndef __DECLSPEC_H
#define __DECLSPEC_H

#include "../object.h"

namespace n___declspec {
	class C__declspec :public Object
	{
	public:
		C__declspec();
		int my_init(void *p=nullptr);
	};
}

using namespace n___declspec;

#endif
