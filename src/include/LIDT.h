#ifndef LIDT_H
#define LIDT_H

#include "../object.h"

namespace n_LIDT {
	class CLIDT :public Object
	{
	public:
		CLIDT();
		~CLIDT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LIDT;

#endif
