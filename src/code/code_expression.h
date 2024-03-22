#ifndef CODE_EXPRESSION_H
#define CODE_EXPRESSION_H

#include "../object.h"

namespace n_code_expression {
	class Ccode_expression :public Object
	{
	public:
		Ccode_expression();
		~Ccode_expression();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_expression); }
	};
}

using namespace n_code_expression;

#endif
