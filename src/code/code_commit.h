#ifndef CODE_COMMIT_H
#define CODE_COMMIT_H

#include "object/object.h"

namespace n_code_commit {
	class Ccode_commit :public Object
	{
	public:
		Ccode_commit();
		~Ccode_commit();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_commit); }
	};
}

using namespace n_code_commit;

#endif
