#ifndef VRNDSCALEPS_H
#define VRNDSCALEPS_H

#include "object/object.h"

namespace n_VRNDSCALEPS {
	class CVRNDSCALEPS :public Object
	{
	public:
		CVRNDSCALEPS();
		~CVRNDSCALEPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRNDSCALEPS;

#endif
