#ifndef __NOGC_H
#define __NOGC_H

#include "object/object.h"

namespace n___nogc {
	class C__nogc :public Object
	{
	public:
		C__nogc();
		int my_init(void *p=nullptr);
	};
}

using namespace n___nogc;

#endif
