#ifndef VCVTPS2PH_H
#define VCVTPS2PH_H

#include "../object.h"

namespace n_VCVTPS2PH {
	class CVCVTPS2PH :public Object
	{
	public:
		CVCVTPS2PH();
		~CVCVTPS2PH();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VCVTPS2PH;

#endif
