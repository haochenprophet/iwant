#ifndef KTESTQ_H
#define KTESTQ_H

#include "../object.h"

namespace n_KTESTQ {
	class CKTESTQ :public Object
	{
	public:
		CKTESTQ();
		~CKTESTQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KTESTQ;

#endif
