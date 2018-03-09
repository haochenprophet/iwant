#ifndef DIV_H
#define DIV_H

#include "../object.h"

namespace n_DIV {
	class CDIV :public Object
	{
	public:
		CDIV();
		~CDIV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DIV;

#endif
