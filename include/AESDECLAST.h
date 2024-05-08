#ifndef AESDECLAST_H
#define AESDECLAST_H

#include "../object.h"

namespace n_AESDECLAST {
	class CAESDECLAST :public Object
	{
	public:
		CAESDECLAST();
		~CAESDECLAST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AESDECLAST;

#endif
