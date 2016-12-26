#ifndef __INTERFACE_H
#define __INTERFACE_H

#include "object.h"

namespace n___interface {
	class C__interface :public Object
	{
	public:
		C__interface();
		int my_init(void *p=nullptr);
	};
}

using namespace n___interface;

#endif
