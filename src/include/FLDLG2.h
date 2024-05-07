#ifndef FLDLG2_H
#define FLDLG2_H

#include "../object.h"

namespace n_FLDLG2 {
	class CFLDLG2 :public Object
	{
	public:
		CFLDLG2();
		~CFLDLG2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLDLG2;

#endif
