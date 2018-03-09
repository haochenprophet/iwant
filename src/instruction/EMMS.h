#ifndef EMMS_H
#define EMMS_H

#include "../object.h"

namespace n_EMMS {
	class CEMMS :public Object
	{
	public:
		CEMMS();
		~CEMMS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_EMMS;

#endif
