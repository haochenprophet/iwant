#ifndef TIMELINE_H_H
#define TIMELINE_H_H

#include "object.h"
#include "timepoint.h"

namespace n_timeline {
	

	class Ctimeline :public Object
	{
	public:
		TimePoint origin;//Origin of time.default Etime_orientation::zero
	public:
		Ctimeline();
		~Ctimeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctimeline); }
	};
}

using namespace n_timeline;

#endif
