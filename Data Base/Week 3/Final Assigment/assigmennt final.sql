CREATE DATABASE LIBARAY_FINAL_EXAM;
USE LIBARAY_FINAL_EXAM;
CREATE TABLE Student (
    StudentID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(255) NOT NULL,
    Email VARCHAR(255) NOT NULL,
    Phone VARCHAR(15),
    Address TEXT
);


CREATE TABLE Book (
    ISBN VARCHAR(13) PRIMARY KEY,
    Title VARCHAR(255) NOT NULL,
    Author VARCHAR(255) NOT NULL,
    Genre VARCHAR(50),
    TotalCopies INT NOT NULL,
    AvailableCopies INT NOT NULL
);

CREATE TABLE Borrowing (
    BorrowID INT AUTO_INCREMENT PRIMARY KEY,
    StudentID INT,
    ISBN VARCHAR(13),
    BorrowDate DATE NOT NULL,
    DueDate DATE NOT NULL,
    ReturnDate DATE,
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID),
    FOREIGN KEY (ISBN) REFERENCES Book(ISBN)
);

-- Insert a new borrowing record for a student (e.g., StudentID 3) for a book with the most available copies.


INSERT INTO Borrowing (StudentID,ISBN,BorrowDate,DueDate,ReturnDate) Values (3,(
select ISBN
from Book
where AvailableCopies = (select MAX(AvailableCopies)
						from Book)
),(current_date()),'2023-11-20','2023-11-30');

-- Using Update Query, decrease the available copies of a book (e.g., ISBN '9781234567890') by 1 when a student borrows it.

-- INSET The book of ISBN '9781234567890'
INSERT INTO Book (ISBN, Title, Author, Genre, TotalCopies, AvailableCopies) VALUES
('9781234567890', 'Sample Book Title', 'Sample Author', 'Sample Genre', 10, 5);

-- Borrow The Book of ISBN '9781234567890'
INSERT INTO Borrowing (StudentID, ISBN, BorrowDate, DueDate, ReturnDate) VALUES 
(1, '9781234567890', CURRENT_DATE(), '2023-11-25', '2023-12-03');

-- Decrease the available copies of a book (e.g., ISBN '9781234567890')

UPDATE Book
SET AvailableCopies = AvailableCopies - 1
WHERE ISBN = '9781234567890';

-- Retrieve the names of students who have borrowed the most books
SELECT STUDENT.NAME 
FROM STUDENT
WHERE STUDENTID IN (
		 SELECT STUDENTID AS STDID
          FROM Borrowing
          GROUP BY STUDENTID
          HAVING COUNT(STUDENTID) = (
									SELECT MAX(STUDENT_B_C)
                                    FROM (SELECT StudentID,COUNT(STUDENTID) AS STUDENT_B_C
										  FROM Borrowing
                                          GROUP BY STUDENTID
										)AS B_C
 								    )
	              );


-- Retrieve the books that are overdue (i.e., the return date is before the current date).

SELECT *
FROM Borrowing
WHERE current_date() > ReturnDate;

SELECT *
FROM Borrowing
WHERE current_date() > ReturnDate;

SELECT col FROM table1
UNION
SELECT col FROM table2;

-- There is a table named Employee. In that table there is a field named Salary. Determine the second lowest salary.

SELECT * 
FROM EMPLOYEE
WHERE SALARY = (-- 1ST QUREY
				SELECT MIN(SALARY)
                FROM EMPLOYEE
                WHERE SALARY > (-- 2ND QUREY
							 SELECT MIN(SALARY)
                             FROM EMPLOYEE
                             WHERE SALARY)
				);
                

-- There are tables named Employee, Job History, Department.
-- Use ON DELETE CASCADE on Job History for deleting Employee
-- Use ON DELETE SET NULL on Employee for deleting Department

CREATE TABLE DEPARTMENT(
	DEPARTMENT_ID VARCHAR(10) PRIMARY KEY,
    DEPARTMENT_NAME VARCHAR(50) NOT NULL,
    LOCATION_ID VARCHAR(10) DEFAULT NULL
);

CREATE TABLE EMPLOYEE(
	EMPLOYEE_ID VARCHAR(10) PRIMARY KEY,
    EMOLOYEE_NAME VARCHAR(50) NOT NULL,
    SALARY DECIMAL(10, 2) DEFAULT 0,
    DEPARTMENT_ID VARCHAR(10),
    FOREIGN KEY (DEPARTMENT_ID) REFERENCES DEPARTMENT(DEPARTMENT_ID)
		ON DELETE SET NULL
);

CREATE TABLE JOB_HISTORY(
	JOB_ID VARCHAR(10) PRIMARY KEY,
    JOB_TITLE VARCHAR(50) NOT NULL,
	EMPLOYEE_ID VARCHAR(10),
    FOREIGN KEY (EMPLOYEE_ID) REFERENCES EMPLOYEE(EMPLOYEE_ID)
		ON DELETE CASCADE
);


SELECT *
FROM DEPARTMENT;

SELECT *
FROM EMPLOYEE;

SELECT *
FROM JOB_HISTORY;

DELETE DEPARTMENT
FROM DEPARTMENT
WHERE DEPARTMENT_ID = 'IT';
