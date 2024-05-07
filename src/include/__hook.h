#ifndef __HOOK_H
#define __HOOK_H

#include "../object.h"

namespace n___hook {
	class C__hook :public Object
	{
	public:
		C__hook();
		int my_init(void *p=nullptr);
	};
}

using namespace n___hook;

#endif
