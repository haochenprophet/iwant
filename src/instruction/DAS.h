#ifndef DAS_H
#define DAS_H

#include "object/object.h"

namespace n_DAS {
	class CDAS :public Object
	{
	public:
		CDAS();
		~CDAS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DAS;

#endif
