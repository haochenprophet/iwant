#ifndef __FORCEINLINE_H
#define __FORCEINLINE_H

#include "../object.h"

namespace n___forceinline {
	class C__forceinline :public Object
	{
	public:
		C__forceinline();
		int my_init(void *p=nullptr);
	};
}

using namespace n___forceinline;

#endif
