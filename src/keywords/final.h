#ifndef FINAL_H
#define FINAL_H

#include "object.h"

namespace n_final {
	class Cfinal :public Object
	{
	public:
		Cfinal();
		int my_init(void *p=nullptr);
	};
}

using namespace n_final;

#endif
