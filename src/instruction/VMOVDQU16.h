#ifndef VMOVDQU16_H
#define VMOVDQU16_H

#include "object.h"

namespace n_VMOVDQU16 {
	class CVMOVDQU16 :public Object
	{
	public:
		CVMOVDQU16();
		~CVMOVDQU16();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VMOVDQU16;

#endif
