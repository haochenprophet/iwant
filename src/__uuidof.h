#ifndef __UUIDOF_H
#define __UUIDOF_H

#include "object.h"

namespace n___uuidof {
	class C__uuidof :public Object
	{
	public:
		C__uuidof();
		int my_init(void *p=NULL);
	};
}

using namespace n___uuidof;

#endif
