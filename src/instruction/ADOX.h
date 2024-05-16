#ifndef ADOX_H
#define ADOX_H

#include "object/object.h"

namespace n_ADOX {
	class CADOX :public Object
	{
	public:
		CADOX();
		~CADOX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADOX;

#endif
