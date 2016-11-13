#include "MySql.h" 
 
int main() 
{ 
    try 
   {  
      ResultSet rs1, rs2; 
      DataBase<MySql> dataBase; 
 
      dataBase.connect("205.XXX.XXX.XX", "user", "pass", "db"); 
 
     // CREATE FIRST TABLE 
     dataBase << "CREATE TABLE if not exists tblTest1(test char(15) NOT NULL,
         testInt INT NULL, Constraint PK Primary Key(test))"; 

     // INSERT SOME ITENS 
     dataBase << "INSERT INTO tblTest1(test, testInt) VALUES('00', 1)" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('01')" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('02')" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('03')" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('04')" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('05')" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('06')" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('07')" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('08')" ; 
     dataBase << "INSERT INTO tblTest1(test) VALUES('09')" ; 
 
     // CREATE SECOND TABLE 
     dataBase << "CREATE TABLE if not exists tblTest2(test char(15) NOT NULL,
         dt DATE NULL, Constraint PK Primary Key(test))"; 
  
     // INSERT SOME ITENS 
     dataBase << "INSERT INTO tblTest2(test, dt) VALUES('01', '1979/11/14')" ; 
     dataBase << "INSERT INTO tblTest2(test) VALUES('02')" ; 
     dataBase << "INSERT INTO tblTest2(test) VALUES('03')" ; 
     dataBase << "INSERT INTO tblTest2(test) VALUES('04')" ;
     dataBase << "INSERT INTO tblTest2(test) VALUES('05')" ; 
     dataBase << "INSERT INTO tblTest2(test) VALUES('06')" ; 
     dataBase << "INSERT INTO tblTest2(test) VALUES('07')" ; 
     dataBase << "INSERT INTO tblTest2(test) VALUES('08')" ; 
     dataBase << "INSERT INTO tblTest2(test) VALUES('09')" ; 
     dataBase << "INSERT INTO tblTest2(test) VALUES('10')" ; 
 
     // GET (one column) SAME ITENS OF tblTest1 
     dataBase << "SELECT * FROM tblTest1, tblTest2 WHERE tblTest1.test = tblTest2.test",
         rs1;  

     std::string value; 
     std::vector<std::string> row; 
  
     while(rs1.fetch(0, value)) 
     { 
         std::cout << value << std::endl; 
     } 
 
     while(rs1.fetch(row)) 
     { 
        for (size_t i = 0; i < row.size(); i++) 
        { 
           std::cout << row[i] << " | "; 
        } 
       
        std::cout << std::endl; 
     } 
 
     // GET A SPECIFIC ITEN 
     std::cout << rs1.get(0)[0] << " | " << rs1.get(0)[1] << std::endl; 
 
     // GET (one column) SAME ITENS OF tblTest2 
     dataBase << "SELECT * FROM tblTest2 WHERE test = '01'", rs2; 
 
     while(rs2.fetch(1, value)) 
     { 
         std::cout << value << std::endl; 
     } 
  
     while(rs2.fetch(row)) 
     { 
        for (size_t i = 0; i < row.size(); i++) 
        { 
           std::cout << row[i] << " | "; 
        } 
 
        std::cout << std::endl; 
     } 
 
     // GET A SPECIFIC ITEN 
     std::cout << rs2.get(0, 1) << std::endl; 
   } 
   catch (const DataBaseError& e) 
   { 
       std::cout << e.what() << std::endl; 
   } 
 
  return 0;  
}