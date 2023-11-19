CREATE DATABASE UNIVERSITYENROLLMENT;
USE UNIVERSITYENROLLMENT;


-- CREATE TABLE FOR STUDENT 
CREATE TABLE Student(
	Student_ID INT PRIMARY KEY AUTO_INCREMENT,
    First_Name VARCHAR(20) NOT NULL,
    Last_Name VARCHAR(20) NOT NULL,
    Age INT CHECK(Age > 19) NOT NULL
)AUTO_INCREMENT = 10001;

-- CREATE TABLE COURSE
CREATE TABLE Course(
	Course_ID INT PRIMARY KEY AUTO_INCREMENT,
    Course_Name VARCHAR(50) NOT NULL
)AUTO_INCREMENT = 1;

-- CREATE TABLE TEACHER
CREATE TABLE Teacher(
	Teacher_ID INT PRIMARY KEY AUTO_INCREMENT,
    First_Name VARCHAR(20) NOT NULL,
    Last_Name VARCHAR(20) NOT NULL,
    Age INT CHECK(Age > 30) NOT NULL,
    Degree VARCHAR(20) NOT NULL
);


-- MAKE RELATIONSHIP 
-- ENROLLMENT
CREATE TABLE Enrollment(
	Enrollment_ID INT PRIMARY KEY AUTO_INCREMENT,
    Who_Enroll INT, 
    Which_Enroll INT,
	
    CONSTRAINT WHO_EN_fk FOREIGN KEY (Who_Enroll) REFERENCES Student (Student_ID) ON DELETE CASCADE ON UPDATE CASCADE,
    CONSTRAINT WHCIH_EN_fk FOREIGN KEY (Which_Enroll) REFERENCES COURSE (Course_ID) ON DELETE SET NULL ON UPDATE CASCADE
);


-- TAKING WHO
CREATE TABLE Taking_who(
	Paymount DECIMAL(10,2) NOT NULL,
	WHOICH_TAKING INT,
    WHO_TAKING INT,
    CONSTRAINT Taking_Who_PK PRIMARY KEY(WHOICH_TAKING,WHO_TAKING),
	CONSTRAINT WHO_TK_fk FOREIGN KEY (WHO_TAKING) REFERENCES Teacher (Teacher_ID),
    CONSTRAINT WHCIH_TK_fk FOREIGN KEY (WHOICH_TAKING) REFERENCES COURSE (Course_ID)
);
-- IN HERE We Write Inputs For Student
INSERT INTO Student (First_Name, Last_Name, Age) VALUES 
('John', 'Doe', 21),
('Alice', 'Smith', 20),
('Ethan', 'Jones', 22),
('Olivia', 'Brown', 23),
('Liam', 'Wilson', 25),
('Sophia', 'Garcia', 24),
('Noah', 'Martinez', 20),
('Ava', 'Miller', 21),
('William', 'Taylor', 22),
('Isabella', 'Anderson', 23);

-- IN HERE We Write Inputs For Course
INSERT INTO Course (Course_Name) VALUES 
('Mathematics'),
('Physics'),
('Literature'),
('Biology'),
('History'),
('Computer Science'),
('Chemistry'),
('Art'),
('Economics'),
('Music');

-- IN HERE We Write Inputs For Student
INSERT INTO Teacher (First_Name, Last_Name, Age, Degree) VALUES 
('Michael', 'Johnson', 35, 'PhD'),
('Emily', 'Clark', 32, 'Masters'),
('Daniel', 'Adams', 40, 'PhD'),
('Olivia', 'Parker', 33, 'Masters'),
('Matthew', 'Evans', 38, 'PhD'),
('Chloe', 'Turner', 31, 'Masters'),
('David', 'Wright', 37, 'PhD'),
('Sophia', 'Scott', 34, 'Masters'),
('James', 'Phillips', 36, 'PhD'),
('Lily', 'Baker', 31, 'Masters');

-- IN HERE We Write Inputs For ENROLLMENT
INSERT INTO Enrollment (Who_Enroll, Which_Enroll) VALUES 
(10001, 1),
(10002, 2),
(10003, 3),
(10004, 4),
(10005, 5),
(10006, 6),
(10007, 7),
(10008, 8),
(10009, 9),
(10010, 10),
(10001, 2),
(10002, 3),
(10003, 4),
(10004, 5),
(10005, 6),
(10006, 7),
(10007, 8),
(10008, 9),
(10009, 10),
(10010, 1);

-- IN HERE We Write Inputs For Taking who
INSERT INTO Taking_who (Paymount, WHOICH_TAKING, WHO_TAKING) VALUES 
(100.00, 1, 11),
(90.00, 2, 12),
(95.00, 3, 13),
(110.00, 4, 14),
(105.00, 5, 15),
(120.00, 6, 16),
(115.00, 7, 17),
(100.00, 8, 18),
(95.00, 9, 19);


