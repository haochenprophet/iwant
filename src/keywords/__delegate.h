#ifndef __DELEGATE_H
#define __DELEGATE_H

#include "object.h"

namespace n___delegate {
	class C__delegate :public Object
	{
	public:
		C__delegate();
		int my_init(void *p=nullptr);
	};
}

using namespace n___delegate;

#endif
