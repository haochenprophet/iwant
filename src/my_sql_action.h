#ifndef MY_SQL_ACTION_H
#define MY_SQL_ACTION_H

#include "action_type.h"

enum class MySqlActionClass
{
	none,
	delete_,
	create,
	insert,
	alert,
	update,
	drop,
};

enum class MySqlAtcion {
	none,
	create_db,
	drop_db,
	drop_tab,
};

//create
#define CREATE_DB "CREATE SCHEMA `%s` DEFAULT CHARACTER SET utf8 ;"
//drop
#define DROP_DB "DROP DATABASE `%s` ;"
#define DROP_TAB "DROP TABLE `%s`.`%s`;"

#endif