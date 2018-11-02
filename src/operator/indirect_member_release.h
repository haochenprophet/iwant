#ifndef INDIRECT_MEMBER_RELEASE_H
#define INDIRECT_MEMBER_RELEASE_H

#include "../operator.h"

namespace n_indirect_member_release {
	class Cindirect_member_release :public Coperator
	{
	public:
		Cindirect_member_release();
		~Cindirect_member_release();
		int my_init(void *p=nullptr);
	};
}

using namespace n_indirect_member_release;

#endif
