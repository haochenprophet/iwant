#ifndef __M128_H
#define __M128_H

#include "../object.h"

namespace n___m128 {
	class C__m128 :public Object
	{
	public:
		C__m128();
		int my_init(void *p=nullptr);
	};
}

using namespace n___m128;

#endif
