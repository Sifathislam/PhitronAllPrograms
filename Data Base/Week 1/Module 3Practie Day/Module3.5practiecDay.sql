CREATE database module3PracticeDay;
USE module3PracticeDay;

CREATE TABLE Employee(
   EmployeeId char(4) PRIMARY KEY,
   EmployeeName varchar(50) NOT NULL,
   EmployeeSalary INT,
   JoiningDate time
);

-- insert data  

INSERT INTO Employee(EmployeeId,EmployeeName,EmployeeSalary,JoiningDate) VALUES('1001','Sifath Islam', 100000, '10:03:00');
INSERT INTO Employee(EmployeeId,EmployeeName,EmployeeSalary,JoiningDate) VALUES('1002','Shaik Islam', 400000, '15:43:00');
INSERT INTO Employee(EmployeeId,EmployeeName,EmployeeSalary,JoiningDate) VALUES('1003','Siam Islam', 500000, '11:50:00');

SET SQL_SAFE_UPDATES = 0;

UPDATE Employee
SET EmployeeName = 'Sifat Islam'
where EmployeeId = '1001';

DELETE from Employee
where EmployeeId = '1002';
SET SQL_SAFE_UPDATES = 1;

select *
from Employee;






CREATE database module3PracticeDayPart2;

CREATE TABLE Employee(
   EmpId CHAR(1) PRIMARY KEY,
   EmpName VARCHAR(50) NOT NULL,
   Joining YEAR,
   Birthday_Year INT CHECK(Birthday_Year < 2000),
   Designation VARCHAR(50)NOT NULL,
   Salary INT DEFAULT 0
);

-- insert 
INSERT INTO Employee(EmpId,EmpName,Joining,Birthday_Year,Designation,Salary) VALUES('1',"Sifat Islam","13-10-2002",1995,"Senior Web Developer")
