#ifndef APOSTROPHE_H
#define APOSTROPHE_H

#include "operator.h"

namespace n_apostrophe {
	class Capostrophe :public Coperator
	{
	public:
		Capostrophe();
		~Capostrophe();
		int my_init(void *p=nullptr);
	};
}

using namespace n_apostrophe;

#endif
