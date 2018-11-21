CREATE DATABASE  IF NOT EXISTS `organization` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `organization`;
-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: localhost    Database: organization
-- ------------------------------------------------------
-- Server version	8.0.0-dmr-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `organization`
--

DROP TABLE IF EXISTS `organization`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `organization` (
  `idorganization` int(11) NOT NULL AUTO_INCREMENT,
  `uuid` varchar(45) NOT NULL,
  `node` varchar(45) DEFAULT NULL COMMENT 'node name or sub-organization name',
  `type` varchar(45) DEFAULT NULL COMMENT 'node type :root, leaf',
  `parents` varchar(45) DEFAULT NULL COMMENT 'node parents uuid for organization tree ',
  `child` varchar(45) DEFAULT NULL COMMENT 'child link child[0] to child[n]',
  `firstchild` varchar(45) DEFAULT NULL COMMENT 'firstchild uuid for organization tree ',
  `nextsibling` varchar(45) DEFAULT NULL COMMENT 'nextsibling uuid for organization tree ',
  `name` varchar(45) DEFAULT NULL,
  `value_type` varchar(45) DEFAULT NULL COMMENT 'node value ',
  `value_uuid` varchar(45) DEFAULT NULL COMMENT 'uuid_link  link to other database or table ',
  `value_url` varchar(200) DEFAULT NULL COMMENT 'value point one url ',
  `value` varchar(200) DEFAULT NULL COMMENT 'value text ',
  `result` varchar(45) DEFAULT NULL COMMENT 'result value :Used to store calculation results',
  `feedback` varchar(45) DEFAULT NULL COMMENT 'feedback for result value :Used to evaluate predictions that are worthy of real results',
  `time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `status` varchar(45) NOT NULL DEFAULT 'normal',
  `priority` int(11) DEFAULT NULL,
  `author` varchar(45) DEFAULT NULL COMMENT 'This node record creator,can name,can app ,',
  `location` varchar(45) DEFAULT NULL COMMENT 'The location where this record was created ,Latitude, latitude, city, address and so on ...',
  `remark` text COMMENT 'Describe organizational relationships',
  `relationship` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idorganization`,`uuid`),
  UNIQUE KEY `idorganization_UNIQUE` (`idorganization`),
  UNIQUE KEY `uuid_UNIQUE` (`uuid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='organization tree ';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `organization`
--

LOCK TABLES `organization` WRITE;
/*!40000 ALTER TABLE `organization` DISABLE KEYS */;
/*!40000 ALTER TABLE `organization` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-11-21 14:28:18
