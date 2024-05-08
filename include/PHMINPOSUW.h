#ifndef PHMINPOSUW_H
#define PHMINPOSUW_H

#include "../object.h"

namespace n_PHMINPOSUW {
	class CPHMINPOSUW :public Object
	{
	public:
		CPHMINPOSUW();
		~CPHMINPOSUW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PHMINPOSUW;

#endif
