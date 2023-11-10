CREATE DATABASE CourseEnrollment;
USE CourseEnrollment;


CREATE TABLE Student(
	StudentID INT PRIMARY KEY AUTO_INCREMENT,
    First_Name VARCHAR(25) NOT NULL,
    Last_Name VARCHAR(25) NOT NULL,
    Age INT CHECK(Age > 12)
)AUTO_INCREMENT = 1001;


CREATE TABLE Course(
	Course_Id INT PRIMARY KEY AUTO_INCREMENT,
    Course_Name VARCHAR(50)
);



CREATE TABLE Enroll(
	Enrollment_ID INT AUTO_INCREMENT,
    Who_Enroll int,
    Which_Enroll int,
    
    
	CONSTRAINT enrollmentPK PRIMARY KEY(Enrollment_ID),
    CONSTRAINT WhoEnrollPK FOREIGN KEY (Who_Enroll) REFERENCES Student(StudentID) ON DELETE CASCADE,
	CONSTRAINT WhoichEnrollPK FOREIGN KEY (Which_Enroll) REFERENCES Course(Course_Id) ON DELETE CASCADE
);


-- Inserting data into the Student table
INSERT INTO Student (First_Name, Last_Name, Age) VALUES
('John', 'Doe', 18),
('Alice', 'Smith', 20),
('Bob', 'Johnson', 22),
('Emily', 'Davis', 19);

-- Inserting data into the Course table
INSERT INTO Course (Course_Name) VALUES
('Mathematics'),
('History'),
('Computer Science'),
('English Literature');

-- Inserting data into the Enroll table
INSERT INTO Enroll (Who_Enroll, Which_Enroll) VALUES
(1001, 1), -- John enrolled in Mathematics
(1002, 2), -- Alice enrolled in History
(1003, 3), -- Bob enrolled in Computer Science
(1004, 4), -- Emily enrolled in English Literature
(1001, 3), -- John also enrolled in Computer Science
(1002, 1); -- Alice also enrolled in Mathematics