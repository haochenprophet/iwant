#ifndef VINSERTI128_H
#define VINSERTI128_H

#include "../object.h"

namespace n_VINSERTI128 {
	class CVINSERTI128 :public Object
	{
	public:
		CVINSERTI128();
		~CVINSERTI128();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VINSERTI128;

#endif
