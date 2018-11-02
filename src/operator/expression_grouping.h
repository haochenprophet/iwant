#ifndef EXPRESSION_GROUPING_H
#define EXPRESSION_GROUPING_H

#include "../operator.h"

namespace n_expression_grouping {
	class Cexpression_grouping :public Coperator
	{
	public:
		Cexpression_grouping();
		~Cexpression_grouping();
		int my_init(void *p=nullptr);
	};
}

using namespace n_expression_grouping;

#endif
