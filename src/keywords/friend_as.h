#ifndef FRIEND_AS_H
#define FRIEND_AS_H

#include "object/object.h"

namespace n_friend_as {
	class Cfriend_as :public Object
	{
	public:
		Cfriend_as();
		int my_init(void *p=nullptr);
	};
}

using namespace n_friend_as;

#endif
