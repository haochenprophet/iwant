#ifndef RECOGNITION_TAB_H
#define RECOGNITION_TAB_H

#include "object.h"
#include "recognition.h"

namespace n_recognition_tab {

	typedef struct bit_information_struct
	{
		int value;
		char* informarion;
	}bit_information;

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
