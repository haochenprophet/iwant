#ifndef MOVSLDUP_H
#define MOVSLDUP_H

#include "../object.h"

namespace n_MOVSLDUP {
	class CMOVSLDUP :public Object
	{
	public:
		CMOVSLDUP();
		~CMOVSLDUP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSLDUP;

#endif
