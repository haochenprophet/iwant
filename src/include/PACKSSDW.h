#ifndef PACKSSDW_H
#define PACKSSDW_H

#include "../object.h"

namespace n_PACKSSDW {
	class CPACKSSDW :public Object
	{
	public:
		CPACKSSDW();
		~CPACKSSDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PACKSSDW;

#endif
