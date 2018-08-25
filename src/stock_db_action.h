#ifndef STOCK_DB_ACTION_H
#define STOCK_DB_ACTION_H

#include "action_type.h"
enum class StockActionClass 
{
	none ,
	verify,
	add,
	calculate,
	delete_,
	build,
	execute,
	clear,
	create,
	insert,
	alert,
	update,
};

enum class StockAtcion { //NOTE: should append enum ,  insert enum cmd number will be change  
	none = 0,
	verify_id = BIT0,//1
	add_ma = BIT1,//2
	add_avg = 3,//3
	calculate_ma = BIT2,//4
	build_batch =5,//5
	calculate_avg = 6,//6
	add_rd =7, //rise & drop
	calculate_rd = 8,//8
	delete_zero=9,//9
	add_kprice,//10
	add_ma5,
	add_ma10,
	add_ma20,
	add_ma30,
	add_ma60,
	add_ma100,
	calculate_ma5,
	calculate_ma10,
	calculate_ma20,
	calculate_ma30,
	calculate_ma60,
	calculate_ma100,
	add_am,//amplitude
	calculate_am,
	calculate_kp,//key price
	add_dir,
	calculate_dir,
	execute_add,
	clear_dir,
	create_dir,
	insert_dir_id,
	alert_dir_key,
	update_dir,
	insert_dir,
	add_type,
	update_type,
	verify_ma,
	
};
//CREATE
#define CREATE_DIR_TABLE "CREATE TABLE `%s`.`dir` ( \
	`iddir` INT NOT NULL AUTO_INCREMENT,\
	`stockid` VARCHAR(45) NULL,\
	`dir` INT NULL,\
	`time` DATETIME NOT NULL DEFAULT NOW(),\
	PRIMARY KEY(`iddir`),\
		UNIQUE INDEX `iddir_UNIQUE` (`iddir` ASC))\
	ENGINE = InnoDB\
	DEFAULT CHARACTER SET = utf8\
	COMMENT = 'dir';"
//SELECT 
#define SELECT_STOCK_ID "SELECT ID FROM stock.ID;"
#define SELECT_IDPEICE "SELECT idprice FROM `%s`.`%s` ;"
#define SELECT_AVG_MA "SELECT avg(ma) FROM `%s`.`%s` where idprice<=%s;"
#define SELECT_AVG_MA_X "SELECT avg(ma) FROM `%s`.`%s` where idprice <= %s and idprice >= (%s - %d);"
#define SELECT_AVG_CLOSE_X "SELECT avg(close) FROM `%s`.`%s` where idprice <= %s and idprice >= (%s - %d);"
#define SELECT_DIR_0 "SELECT idprice FROM `%s`.`%s` where dir=0;"
#define SELECT_DIR "SELECT ID FROM `%s`.dir;"
#define SELECT_DIR_LAST "SELECT dir FROM `%s`.`%s` ORDER BY idprice DESC LIMIT 1;"
#define SELECT_TYPE "SELECT `type` FROM `%s`.ID where ID =`%s`;"
#define SELECT_TYPE_0 "SELECT ID FROM stock.ID where type=0;"
#define SELECT_TYPE_1 "SELECT ID FROM stock.ID where type=1;"
#define SELECT_LAST_KPRICE "SELECT `k_price` FROM `%s`.`%s` ORDER BY idprice DESC LIMIT 1 ;"
//ADD_COLUMN
#define ADD_MA_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma` DOUBLE NOT NULL DEFAULT 0;"
#define ADD_AVG_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `avg` DOUBLE NOT NULL DEFAULT 0;"
#define ADD_RD_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `rd` DOUBLE NOT NULL DEFAULT 0;"
#define ADD_K_PRICE_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `k_price` DOUBLE NOT NULL DEFAULT 0 COMMENT 'key price' ;"
#define ADD_MA5_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma5` DOUBLE NOT NULL DEFAULT 0 COMMENT '5-day moving average' ;"
#define ADD_MA10_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma10` DOUBLE NOT NULL DEFAULT 0 COMMENT '10-day moving average' ;"
#define ADD_MA20_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma20` DOUBLE NOT NULL DEFAULT 0 COMMENT '20-day moving average' ;"
#define ADD_MA30_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma30` DOUBLE NOT NULL DEFAULT 0 COMMENT '30-day moving average' ;"
#define ADD_MA60_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma60` DOUBLE NOT NULL DEFAULT 0 COMMENT '60-day moving average' ;"
#define ADD_MA100_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `ma100` DOUBLE NOT NULL DEFAULT 0 COMMENT '100-day moving average' ;"
#define ADD_AM_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `am` DOUBLE NOT NULL DEFAULT 0 COMMENT 'amplitude' ;"
#define ADD_DIR_COLUMN "ALTER TABLE `%s`.`%s` ADD COLUMN `dir` DOUBLE NOT NULL DEFAULT 0 COMMENT 'direction' ;"
//UPDATE 
#define UPDATE_IDPEICE "UPDATE `%s`.`%s` SET `idprice`='%d' WHERE `idprice`='%d';"
#define UPDATE_AVG "UPDATE `%s`.`%s` SET `avg`='%s' WHERE `idprice`='%s' AND `avg`=0;"
#define UPDATE_RD "UPDATE  `%s`.`%s` SET rd = (close - y_close) / y_close * 100 WHERE close >0 AND y_close >0 AND rd = 0;"
#define UPDATE_MA "UPDATE  `%s`.`%s` SET ma = turnover / volume WHERE turnover >0 AND volume >0 AND ma=0;"
#define UPDATE_MA_CLOSE "UPDATE  `%s`.`%s` SET ma = close WHERE  ma=0;"
#define UPDATE_MA_X "UPDATE `%s`.`%s` SET `ma%d`='%s' WHERE `idprice`='%s' AND `ma%d`=0;"
#define UPDATE_AM "UPDATE  `%s`.`%s` SET am = (high - low) / close * 100 WHERE high >0 AND close >0 AND am = 0;"
#define UPDATE_KP "UPDATE  `%s`.`%s` SET k_price = ma WHERE rd >5 OR rd <-5 OR am >6;"
#define UPDATE_DIR_0 "UPDATE `%s`.`%s` SET dir = 0;"
#define UPDATE_DIR "UPDATE `%s`.`dir` SET `dir`=(SELECT dir FROM `%s`.`%s` ORDER BY idprice DESC LIMIT 1) WHERE `ID`='%s';"
#define UPDATE_DIR_TEST "UPDATE `%s`.`dir` SET `dir`=1 WHERE `ID`='%s';"
#define UPDATE_TYPE_ID "UPDATE `stock`.`ID` SET `type`='1' WHERE `idID`<10;"
//ALTER
#define ALTER_AUTO_INCREMENT "ALTER TABLE `%s`.`%s` AUTO_INCREMENT =%d;"
#define ALTER_DIR_PKEY "ALTER TABLE `%s`.`dir` DROP PRIMARY KEY, ADD PRIMARY KEY(`iddir`, `time`);"
#define ALTER_ADD_TYPE "ALTER TABLE `%s`.`%s` ADD COLUMN `type` INT NOT NULL DEFAULT 0 ;"
//SET
#define SET_SAFE_UPDATES_0  "SET SQL_SAFE_UPDATES = 0;"
#define SET_SAFE_UPDATES_1  "SET SQL_SAFE_UPDATES = 1;"
//DELETE
#define DELETE_ZERO_ROW "DELETE FROM `%s`.`%s` WHERE `y_close`='0' AND `open`='0'AND `close`='0' AND `high`='0' AND `low`='0';"
//INSERT
#define INSERT_DIR_ID "INSERT INTO `%s`.`dir` (`stockid`) SELECT ID FROM `%s`.`ID`;"
#define INSERT_DIR "INSERT INTO `%s`.`dir` (`stockid`,`dir`,`k_price`) VALUES('%s', (SELECT `dir` FROM `%s`.`%s` ORDER BY idprice DESC LIMIT 1),%s);"
//OTHER
#define BUILD_BATCH "%s %s %s %s"  //[0].exe [1]action [2]password [3]db_name [4]tab_name

#endif
