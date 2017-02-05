#ifndef THROWS_H
#define THROWS_H

#include "../object.h"

namespace n_throws {
	class Cthrows :public Object
	{
	public:
		Cthrows();
		int my_init(void *p=nullptr);
	};
}

using namespace n_throws;

#endif
