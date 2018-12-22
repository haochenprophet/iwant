#ifndef MY_SQL_ACTION_H
#define MY_SQL_ACTION_H

#include "action_type.h"

enum class MySqlActionClass
{
	none,
	select,
	delete_,
	create,
	insert,
	alert,
	update,
	drop,
	query,
};

enum class MySqlAtcion {
	none,
	create_db,
	drop_db,
	drop_tab,
	query,
	verify_id,
};

//create
#define CREATE_DB "CREATE SCHEMA `%s` DEFAULT CHARACTER SET utf8 ;"
//drop
#define DROP_DB "DROP DATABASE `%s` ;"
#define DROP_TAB "DROP TABLE `%s`.`%s`;"
//select
#define SELECT_ID_X "SELECT %s FROM `%s`.`%s` ;"
#define UPDATE_ID_X "UPDATE `%s`.`%s` SET `%s`='%d' WHERE `%s`='%d';"
#define ALTER_AUTO_INCREMENT "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;"

#endif