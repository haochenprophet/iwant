#ifndef SEMICOLON_OPERATOR_H
#define SEMICOLON_OPERATOR_H

#include "../operator.h"

namespace n_semicolon_operator {
	class Csemicolon_operator :public Coperator
	{
	public:
		Csemicolon_operator();
		~Csemicolon_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_semicolon_operator;

#endif
