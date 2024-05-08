#ifndef MEMBER_RELEASE_H
#define MEMBER_RELEASE_H

#include "operator.h"

namespace n_member_release {
	class Cmember_release :public Coperator
	{
	public:
		Cmember_release();
		~Cmember_release();
		int my_init(void *p=nullptr);
	};
}

using namespace n_member_release;

#endif
