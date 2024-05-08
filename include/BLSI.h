#ifndef BLSI_H
#define BLSI_H

#include "../object.h"

namespace n_BLSI {
	class CBLSI :public Object
	{
	public:
		CBLSI();
		~CBLSI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BLSI;

#endif
