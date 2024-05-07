#ifndef VFMADDSUB231PD_H
#define VFMADDSUB231PD_H

#include "../object.h"

namespace n_VFMADDSUB231PD {
	class CVFMADDSUB231PD :public Object
	{
	public:
		CVFMADDSUB231PD();
		~CVFMADDSUB231PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADDSUB231PD;

#endif
