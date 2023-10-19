USE module1;
--  This how you can create an table 
CREATE TABLE Student(
	RollName CHAR(4) PRIMARY KEY,
	Name VARCHAR(50),
	Marks DOUBLE
);

-- DROP table Student with this we can delete and table 

--  This how you can Insert data an table
INSERT INTO Student
(RollName,Name,Marks) VALUES(10,"Sifat", 22.5);
INSERT INTO Student
(RollName,Name,Marks) VALUES(11,"Shaik", 20.5);

--  This how you can Update an data in table
SET SQL_SAFE_UPDATES = 0;-- if we don't do this we can change any from there 
UPDATE Student
SET Name = "Sifat Islam"
WHERE RollName = 10;
--  This how you can delete an data in table
DELETE From Student -- with this we can delete all date in table 
WHERE RollName = 10; 

SET SQL_SAFE_UPDATES = 1;

