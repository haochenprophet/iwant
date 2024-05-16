#ifndef PSLLQ_H
#define PSLLQ_H

#include "object/object.h"

namespace n_PSLLQ {
	class CPSLLQ :public Object
	{
	public:
		CPSLLQ();
		~CPSLLQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSLLQ;

#endif
