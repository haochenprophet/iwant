#ifndef SQL_H
#define SQL_H

#include "object.h"
#include "os.h"

namespace n_sql {

	enum class SqlOperate { // record status
		nothing,
		select,
		update,
		insert,
		create,
		delete_,
	};

	class Csql :public Object
	{
	public:
		SqlOperate sql_opetate;
	public:
		Csql();
	};

}
using namespace n_sql;

#endif
