#ifndef FOR_H
#define FOR_H

#include "../object.h"

namespace n_for {
	class Cfor :public Object
	{
	public:
		Cfor();
		int my_init(void *p=nullptr);
	};
}

using namespace n_for;

#endif
