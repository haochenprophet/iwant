#ifndef VFMSUB231SD_H
#define VFMSUB231SD_H

#include "object.h"

namespace n_VFMSUB231SD {
	class CVFMSUB231SD :public Object
	{
	public:
		CVFMSUB231SD();
		~CVFMSUB231SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB231SD;

#endif
