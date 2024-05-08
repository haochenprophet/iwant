#ifndef SECURITY_ISSUE_H
#define SECURITY_ISSUE_H

#include "../object.h"

namespace n_security_issue {
	class Csecurity_issue :public Object
	{
	public:
		Csecurity_issue();
		~Csecurity_issue();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_issue); }
	};
}

using namespace n_security_issue;

#endif
