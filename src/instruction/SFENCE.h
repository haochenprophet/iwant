#ifndef SFENCE_H
#define SFENCE_H

#include "object/object.h"

namespace n_SFENCE {
	class CSFENCE :public Object
	{
	public:
		CSFENCE();
		~CSFENCE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SFENCE;

#endif
