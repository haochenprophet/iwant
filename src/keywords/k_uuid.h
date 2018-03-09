#ifndef K_UUID_H
#define K_UUID_H

#include "../object.h"

namespace n_k_uuid {
	class CKuuid :public Object
	{
	public:
		CKuuid();
		int my_init(void *p=nullptr);
	};
}

using namespace n_k_uuid ;

#endif
