#ifndef VFNMADD231SD_H
#define VFNMADD231SD_H

#include "object/object.h"

namespace n_VFNMADD231SD {
	class CVFNMADD231SD :public Object
	{
	public:
		CVFNMADD231SD();
		~CVFNMADD231SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMADD231SD;

#endif
