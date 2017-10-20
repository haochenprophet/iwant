#ifndef VFNMSUB231SD_H
#define VFNMSUB231SD_H

#include "object.h"

namespace n_VFNMSUB231SD {
	class CVFNMSUB231SD :public Object
	{
	public:
		CVFNMSUB231SD();
		~CVFNMSUB231SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB231SD;

#endif
