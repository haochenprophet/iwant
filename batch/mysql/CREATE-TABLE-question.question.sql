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

SELECT * FROM question.question;
