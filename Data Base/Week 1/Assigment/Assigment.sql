CREATE database Assigment;
USE Assigment;

-- _____ Make a student table _____
CREATE TABLE student_table(
    student_ROLL CHAR(4) PRIMARY KEY,
    student_NAME VARCHAR(50) NOT NULL,
    student_ADDRESS VARCHAR(150),
    student_DATE_OF_BIRTH DATE,
    department VARCHAR(100)
);

-- _____ Make a library table _____

CREATE TABLE library_table(
   bookID CHAR(4) PRIMARY KEY,
   borrowedWho char(4),
   bookName VARCHAR(20) NOT NULL,
   AVAILABLE BOOLEAN DEFAULT true,
   
   FOREIGN KEY (borrowedWho) REFERENCES student_table(student_ROLL)
 );

-- _____ Make a fees table _____

CREATE TABLE fees_table(
  feesID CHAR(4) PRIMARY KEY,
  feesGiverID CHAR(4),
  bookID CHAR(4),
  feesAmount INT DEFAULT(0),
  
  constraint FOREIGN KEY (feesGiverID) REFERENCES student_table(student_ROLL),
  constraint FOREIGN KEY (bookID) REFERENCES library_table(bookID)
);


-- EMPLOYEEE

CREATE TABLE Employee(
  EmployeeID CHAR(4),
  FirstName VARCHAR(25),
  LastName VARCHAR(25),
  Age INT,
  Department VARCHAR(30)
);

INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('1',"John","Doe",28,'Sales');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('2',"Jane","Smith",32,'Marketing');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('3',"Michael","Johnson",35,'Finance');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('4',"Sarah","Brown",30,'HR');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('5',"William","Davis",25,'Engineering');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('6',"Emily","Wilson",28,'Sales');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('7',"Robert","Lee",33,'Marketing');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('8',"Laura","Hall",29,'Finance');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('9',"Thomas","White",31,'HR');
INSERT INTO Employee(EmployeeID,FirstName,LastName,Age,Department) VALUES('10',"Olivia","Clark",27,'Engineering');

SELECT DISTINCT Department
FROM Employee;

SELECT LastName
FROM Employee
ORDER BY Age DESC;

SELECT LastName
FROM Employee
WHERE Age > 30 AND Department = 'Marketing'

