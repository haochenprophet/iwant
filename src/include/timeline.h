#ifndef TIMELINE_H_H
#define TIMELINE_H_H

#include "object.h"
#include "timepoint.h"

namespace n_timeline {
	

	class Ctimeline :public Object
	{
	public:
		TimePoint origin;//Origin of time.default Etime_orientation::zero
		std::list<TimePoint *> time_point_list; //Multiple time point in one timeline
	public:
		Ctimeline();
		~Ctimeline();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctimeline); }
		void add(TimePoint *tp);
		void adjust_status(TimePoint *tp_now);
	};
}

using namespace n_timeline;

#endif
