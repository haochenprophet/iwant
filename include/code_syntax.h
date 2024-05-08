#ifndef CODE_SYNTAX_H
#define CODE_SYNTAX_H

#include "../object.h"

namespace n_code_syntax {
	class Ccode_syntax :public Object
	{
	public:
		Ccode_syntax();
		~Ccode_syntax();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_syntax); }
	};
}

using namespace n_code_syntax;

#endif
