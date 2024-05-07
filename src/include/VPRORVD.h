#ifndef VPRORVD_H
#define VPRORVD_H

#include "../object.h"

namespace n_VPRORVD {
	class CVPRORVD :public Object
	{
	public:
		CVPRORVD();
		~CVPRORVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPRORVD;

#endif
