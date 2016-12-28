#ifndef USING_DECLARATION_H
#define USING_DECLARATION_H

#include "object.h"

namespace n_using_declaration {
	class Cusing_declaration :public Object
	{
	public:
		Cusing_declaration();
		int my_init(void *p=nullptr);
	};
}

using namespace n_using_declaration;

#endif
