CREATE TABLE `question`.`question` (
  `idquestion` INT(30) NOT NULL,
  `type` TEXT NULL,
  `question` TEXT NULL,
  `answer` TEXT NULL,
  `result` TEXT NULL,
  `feedback` TEXT NULL,
  `depend` TEXT NULL,
  `iddepend` INT(30) NULL,
  `status` INT(30) NULL,
  PRIMARY KEY (`idquestion`));

ALTER TABLE `question`.`question` 
CHANGE COLUMN `type` `type` VARCHAR(50) NULL DEFAULT NULL ;

ALTER TABLE `question`.`question` 
CHANGE COLUMN `type` `type` VARCHAR(50) NOT NULL ,
CHANGE COLUMN `question` `question` TEXT NOT NULL ,
CHANGE COLUMN `answer` `answer` TEXT NOT NULL ,
CHANGE COLUMN `result` `result` TEXT NOT NULL ;

ALTER TABLE `question`.`question` 
CHANGE COLUMN `iddepend` `iddepend` INT(30) NULL DEFAULT 0 ,
CHANGE COLUMN `status` `status` INT(30) NULL DEFAULT 0 ;

ALTER TABLE `question`.`question` 
ADD COLUMN `choice` TEXT NULL AFTER `result`;

ALTER TABLE `question`.`question` 
CHANGE COLUMN `choice` `choice` INT NULL DEFAULT NULL ;


ALTER TABLE `question`.`question` 
CHANGE COLUMN `choice` `result` INT(11) NULL DEFAULT NULL AFTER `depend`,
CHANGE COLUMN `idquestion` `id` INT(30) NOT NULL ,
CHANGE COLUMN `question` `sQ` TEXT NOT NULL ,
CHANGE COLUMN `answer` `sA` TEXT NOT NULL ,
CHANGE COLUMN `result` `sR` TEXT NOT NULL ,
CHANGE COLUMN `feedback` `sF` TEXT NULL DEFAULT NULL ,
CHANGE COLUMN `depend` `sD` TEXT NULL DEFAULT NULL ,
CHANGE COLUMN `iddepend` `depend` INT(30) NULL DEFAULT '0' ;

ALTER TABLE `question`.`question` 
CHANGE COLUMN `result` `result` INT(11) NULL DEFAULT 0 ;

ALTER TABLE `question`.`question` 
ADD COLUMN `action` INT(30) NULL DEFAULT 0 AFTER `status`;

SELECT * FROM question.question;
