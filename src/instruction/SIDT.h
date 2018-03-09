#ifndef SIDT_H
#define SIDT_H

#include "../object.h"

namespace n_SIDT {
	class CSIDT :public Object
	{
	public:
		CSIDT();
		~CSIDT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SIDT;

#endif
