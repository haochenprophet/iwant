#ifndef RDPID_H
#define RDPID_H

#include "../object.h"

namespace n_RDPID {
	class CRDPID :public Object
	{
	public:
		CRDPID();
		~CRDPID();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDPID;

#endif
