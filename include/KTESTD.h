#ifndef KTESTD_H
#define KTESTD_H

#include "../object.h"

namespace n_KTESTD {
	class CKTESTD :public Object
	{
	public:
		CKTESTD();
		~CKTESTD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KTESTD;

#endif
