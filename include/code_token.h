#ifndef CODE_TOKEN_H
#define CODE_TOKEN_H

#include "../object.h"

namespace n_code_token {
	class Ccode_token :public Object
	{
	public:
		Ccode_token();
		~Ccode_token();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_token); }
	};
}

using namespace n_code_token;

#endif
