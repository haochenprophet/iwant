#ifndef SAR_H
#define SAR_H

#include "object/object.h"

namespace n_SAR {
	class CSAR :public Object
	{
	public:
		CSAR();
		~CSAR();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SAR;

#endif
