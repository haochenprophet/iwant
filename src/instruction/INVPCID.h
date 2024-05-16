#ifndef INVPCID_H
#define INVPCID_H

#include "object/object.h"

namespace n_INVPCID {
	class CINVPCID :public Object
	{
	public:
		CINVPCID();
		~CINVPCID();
		int my_init(void *p=nullptr);
	};
}

using namespace n_INVPCID;

#endif
