#ifndef HASHTAG_H
#define HASHTAG_H

#include "../operator.h"

namespace n_hashtag {
	class Chashtag :public Coperator
	{
	public:
		Chashtag();
		~Chashtag();
		int my_init(void *p=nullptr);
	};
}

using namespace n_hashtag;

#endif
