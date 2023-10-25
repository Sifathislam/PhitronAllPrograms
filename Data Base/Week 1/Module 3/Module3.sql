CREATE database module2;
USE module2;
-- In here we will see how we can add constrains in table using Primary key , Foreingn key , Unique, Check , Default , Not Null 
-- threre are several way to do those work lets see one by one

-- System No: 1 ;

CREATE TABLE student(
    Roll Char(4) PRIMARY KEY,
    Name Varchar(50) NOT NULL,
    Email Varchar(50) UNIQUE,
    Adress Varchar(100),
    Age INT CHECK(Age > 15)
);

-- Insert from here
INSERT into Student(Roll,Name, Email, Adress, Age) VALUES ("0001",'Sifath','SifathIslam@gmail.com',"Dhaka , Narayanganj",21);
INSERT into Student(Roll,Name, Email, Adress, Age) VALUES ("0002",'Akuna','Akuna@gmail.com',"Chottoragam, rangamati",26);
INSERT into Student(Roll,Name, Email, Adress, Age) VALUES ("0003",'Apon','Apon@gmail.com',"Borisal, Potukhali",24);
INSERT into Student(Roll,Name, Email, Adress, Age) VALUES ("0004",'Shaik','Shaik@gmail.com',"Palestine, Gaza",56);
INSERT into Student(Roll,Name, Email, Adress, Age) VALUES ("0005",'Siam','Siam@gmail.com',"Dhaka, Gulshan",23);

-- System No: 2 ;
CREATE TABLE Student(
   Roll Char(4),
   Name VarChar(50) NOT NULL,
   Email VarChar(50),
   Address VarChar(100),
   Age INT,
   
   -- In here we have write the contrains in system 2
   PRIMARY KEY(Roll),
   UNIQUE(Email),
   CHECK(Age < 23)
);

-- System No: 3;
CREATE TABLE Student(
   Roll Char(4),
   Name VarChar(50) NOT NULL,
   Email VarChar(50),
   Address VarChar(100),
   Age INT,
   
   -- In here we have write the contrains in system 3
   constraint P_key PRIMARY KEY(Roll),
   constraint  U_Qe UNIQUE (Email),
   constraint C_K CHECK (Age < 23)
   
);

-- Libary Table 

CREATE TABLE Libary(
   BookName varchar(20) PRIMARY KEY,
   foreign_key_var char(4),
   
   -- This how we can use foreign key 
   FOREIGN KEY (foreign_key_var) REFERENCES Student(Roll)
);
INSERT INTO Libary(BookName, foreign_key_var) values ('C++ BOOK','0001');


-- This how you can Create composite primary key 
CREATE TABLE Course(
   CourseName varchar(50) primary key,
   University varchar(50),
   
   PRIMARY KEY (CourseName,University)

);

INSERT INTO Course(CourseName, University) values ('C++ coures','Dhaka university');
INSERT INTO Course(CourseName, University) values ('C coures','Dhaka university');
INSERT INTO Course(CourseName, University) values ('java coures','Dhaka university');



--  IN here we will see how select qurey work 

-- See All DATA 
-- Way 1
select Roll, Name, Email, Adress,Age
from student;

-- Way 2
select *
from student;

-- See only name or your requment element this way 
select Name , Age
from student;

-- In Here we will see where qurey 
-- we use to see only sifat information 
select Age
from student
where Name = 'Sifath';

-- IN Here we will se Arithmatic Oparators 

-- first make the table for this 
CREATE Table studentMarks(
   Name varchar(50),
   Roll char(1) PRIMARY KEY,
   MarksCse INT,
   MarksCse2 INT,
   MarksCse3 INT
);
INSERT into studentMarks(Name, Roll , MarksCse,MarksCse2, MarksCse3 ) VALUES ("Sifath", '1',50, 60,40);

select MarksCse + MarksCse2 + MarksCse3 - MarksCse * MarksCse2 / MarksCse3 - MarksCse % MarksCse2 + MarksCse3
from studentMarks
where Roll = '1';


-- IN Here we will se Comparison  Oparators 

select *
from student 
where Age > 25;

-- In Here we will se logical oparators for AND
select *
from student
where age > 20 And Adress = 'Dhaka Narayanganj';
-- In Here we will se logical oparators for OR
select *
from student
where age > 24 Or Adress = 'Dhaka Narayanganj';



-- IN here we will work of distincet, order by , limit , offset

-- DISTINCT work 
select DISTINCT Age
from student;

-- Order by asc and desc work 
-- ASEC
select *
from student
ORDER BY Age ASC;
-- DSEC
select *
from student
ORDER BY Age DESC;

-- LIMIT and OFFSET work 

select * 
from student
limit 3
offset 1;

-- ALL  Togthater

select * 
from student
where Age > 20
order by Age desc
limit 2
offset 2;

-- IN Here we will se in notin like as works 

-- Use of in and not in
-- IN
select *
from student
where Roll IN('0001','0002','0004');
-- NOT IN 
select *
from student
where Roll NOT IN('0001','0002','0004');

-- LIKE
select * 
from student 
where Name Like '%Sifath%';

-- AS
select Name AS nm
from student


