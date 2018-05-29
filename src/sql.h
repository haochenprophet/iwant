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
		alter,
	};

	class Csql :public Object
	{
	public:
		SqlOperate sql_opetate;
		char * db_name;
		char * tab_name;
		char * sql_buf;
		int sql_buf_len;
	public:
		Csql();
		~Csql();
	};

}
using namespace n_sql;

#endif
