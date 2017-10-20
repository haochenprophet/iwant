#ifndef VFMADD231SD_H
#define VFMADD231SD_H

#include "object.h"

namespace n_VFMADD231SD {
	class CVFMADD231SD :public Object
	{
	public:
		CVFMADD231SD();
		~CVFMADD231SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMADD231SD;

#endif
