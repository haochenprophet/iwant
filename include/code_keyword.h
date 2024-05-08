#ifndef CODE_KEYWORD_H
#define CODE_KEYWORD_H

#include "../object.h"

namespace n_code_keyword {
	class Ccode_keyword :public Object
	{
	public:
		Ccode_keyword();
		~Ccode_keyword();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_keyword); }
	};
}

using namespace n_code_keyword;

#endif
