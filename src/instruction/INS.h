#ifndef INS_H
#define INS_H

#include "object/object.h"

namespace n_INS {
	class CINS :public Object
	{
	public:
		CINS();
		~CINS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INS;

#endif
