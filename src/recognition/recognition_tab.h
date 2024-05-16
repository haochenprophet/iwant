#ifndef RECOGNITION_TAB_H
#define RECOGNITION_TAB_H

#include "object/object.h"
#include "recognition.h"

namespace n_recognition_tab {

	class Crecognition_tab :public Object
	{
	public:
		Crecognition_tab();
		~Crecognition_tab();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Crecognition_tab); }
	};
}

using namespace n_recognition_tab;

#endif
