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
	create_tab,
	drop_db,
	drop_tab,
	query,
	verify_id,
};
//alert
#define ADD_UUID_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `uuid` VARCHAR(45) NOT NULL;"
//create
#define CREATE_DB "CREATE SCHEMA `%s` DEFAULT CHARACTER SET utf8 ;"
//drop
#define DROP_DB "DROP DATABASE `%s` ;"
#define DROP_TAB "DROP TABLE `%s`.`%s`;"
//select
#define SELECT_ID_X "SELECT %s FROM `%s`.`%s` ;"
#define UPDATE_ID_X "UPDATE `%s`.`%s` SET `%s`='%d' WHERE `%s`='%d';"
#define ALTER_AUTO_INCREMENT "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;"

//other or long define
#define CREATE_TAB "\
			CREATE TABLE `%s`.`%s` (\
			`id` BIGINT NOT NULL AUTO_INCREMENT, \
			`uuid` VARCHAR(45) NOT NULL, \
			`time` DATETIME NOT NULL DEFAULT NOW(), \
			`type` INT NULL, \
			`object` VARCHAR(1000) NULL COMMENT 'object is everything:url link name script code node...', \
			`value` VARCHAR(1000) NULL COMMENT 'key=obj value', \
			`digital` DOUBLE NULL, \
			`text` TEXT NULL, \
			`memory` LONGBLOB NULL, \
			`priority` INT NULL, \
			`status` VARCHAR(45) NULL, \
			`remark` VARCHAR(1000) NULL, \
			`node` VARCHAR(45) NULL COMMENT 'node name organization tree ', \
			`parents` VARCHAR(45) NULL, \
			`firstchild` VARCHAR(45) NULL, \
			`nextsibling` VARCHAR(45) NULL, \
			`depend` VARCHAR(45) NULL, \
			`feedback` VARCHAR(45) NULL COMMENT 'result feedback', \
			`ext_url` VARCHAR(200) NULL COMMENT 'External relationship db', \
			`ext_db` VARCHAR(200) NULL COMMENT 'External relationship db_name', \
			`ext_tab` VARCHAR(100) NULL COMMENT 'External relationship table name.', \
			`ext_uuid` VARCHAR(45) NULL COMMENT 'External relationship uuid', \
			`author` VARCHAR(45) NULL COMMENT 'name or user db uuid', \
			`method` VARCHAR(45) NULL COMMENT 'uuid', \
			`action` VARCHAR(45) NULL COMMENT 'action uuid ', \
			`task` VARCHAR(45) NULL, \
			`plan` VARCHAR(45) NULL, \
			`event` VARCHAR(45) NULL COMMENT 'event uuid', \
			`property` VARCHAR(45) NULL COMMENT 'property uuid', \
			`family` VARCHAR(45) NULL COMMENT 'family uuid', \
			`command` VARCHAR(45) NULL COMMENT 'command uuid ', \
			`require` VARCHAR(45) NULL COMMENT 'require uuid', \
			`result` VARCHAR(45) NULL COMMENT 'result uuid', \
			`input` VARCHAR(45) NULL COMMENT 'Input uuid ', \
			`output` VARCHAR(45) NULL COMMENT 'output uuid ', \
			`head` VARCHAR(45) NULL COMMENT 'head uuid', \
			`body` VARCHAR(45) NULL COMMENT 'body uuid', \
			`tail` VARCHAR(45) NULL COMMENT 'tail uuid', \
			`timeline` VARCHAR(45) NULL COMMENT 'timeline uuid ', \
			`location` VARCHAR(45) NULL COMMENT 'location uuid ', \
			`solution` VARCHAR(45) NULL COMMENT 'how to do', \
			PRIMARY KEY(`id`, `uuid`), \
				UNIQUE INDEX `id_UNIQUE` (`id` ASC) VISIBLE, \
				UNIQUE INDEX `uuid_UNIQUE` (`uuid` ASC) VISIBLE) \
				ENGINE = InnoDB \
				DEFAULT CHARACTER SET = utf8 \
				COMMENT = 'object+ unique data';"
#endif