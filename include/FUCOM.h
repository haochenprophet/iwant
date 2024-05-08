#ifndef FUCOM_H
#define FUCOM_H

#include "../object.h"

namespace n_FUCOM {
	class CFUCOM :public Object
	{
	public:
		CFUCOM();
		~CFUCOM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FUCOM;

#endif
