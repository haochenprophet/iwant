#ifndef SYMBOL_H
#define SYMBOL_H

#include "object.h"

namespace n_symbol {
	class Csymbol :public Object
	{
	public:
		Csymbol();
		int my_init(void *p=nullptr);
	};
}

using namespace n_symbol;

#endif
