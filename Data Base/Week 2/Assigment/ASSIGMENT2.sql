CREATE TABLE EMPLOYEES(
	FIRST_NAME VARCHAR(50) NOT NULL,
    LAST_NAME VARCHAR(50) NOT NULL,
    DATE_OF_BIRTH DATE,
    DEPARTMENT_ID CHAR(2),
    SALARY DECIMAL(10, 2) DEFAULT 0,
    PRIMARY KEY(FIRST_NAME, LAST_NAME),
    FOREIGN KEY (DEPARTMENT_ID) REFERENCES DEPARTMENTS(DEPARTMENT_ID)
);

CREATE TABLE DEPARTMENTS(
	DEPARTMENT_ID CHAR(2) PRIMARY KEY,
    DEPARTMENT_NAME VARCHAR(50) NOT NULL
);

INSERT INTO employees(FIRST_NAME, LAST_NAME, DATE_OF_BIRTH,DEPARTMENT_ID, SALARY) VALUES ("SIFAT ","ISLAM",'1990-05-15','IT',10000);
INSERT INTO DEPARTMENTS (DEPARTMENT_ID, DEPARTMENT_NAME) VALUES ('20',"IT");


-- Write SQL Query to get the second max salary
SELECT DISTINCT SALARY 
FROM EMPLOYEES
WHERE SALARY = (
				SELECT MAX(SALARY)
                FROM EMPLOYEES
                WHERE SALARY < (
								SELECT MAX(SALARY)
                                FROM EMPLOYEES
                )
);

-- SQL Query to show  the department names and the average salary of the departments

SELECT DEPARTMENTS.DEPARTMENT_NAME, AVG(SALARY)
FROM EMPLOYEES
		JOIN DEPARTMENTS
				ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID
GROUP BY DEPARTMENT_NAME;

-- In the below i answered what is a subquery within example:
-- Main QUERY
SELECT *
FROM EMPLOYEES
WHERE LAST_NAME ='Steve';

SELECT E.FIRST_NAME , E.LAST_NAME
FROM EMPLOYEES AS E
	JOIN (SELECT * FROM EMPLOYEES WHERE FIRST_NAME = 'Steven') AS S
ON E.SALARY < S.SALARY;

-- Count the number of employees of each job type
SELECT JOBS.JOB_TITLE AS JOB_TYPE, COUNT(EMPLOYEES.EMPLOYEE_ID) AS NUMBER_OF_EMPLOYEES
FROM EMPLOYEES
		JOIN JOBS
			ON EMPLOYEES.JOB_ID = JOBS.JOB_ID
GROUP BY JOB_TYPE;

-- Show the names of Departments which doesn’t have any employees
SELECT DEPARTMENTS.DEPARTMENT_NAME
FROM DEPARTMENTS
		LEFT JOIN EMPLOYEES
			ON DEPARTMENTS.DEPARTMENT_ID = EMPLOYEES.DEPARTMENT_ID
WHERE EMPLOYEES.DEPARTMENT_ID IS NULL;





SELECT DEPARTMENTS.DEPARTMENT_NAME
FROM DEPARTMENTS
	LEFT JOIN EMPLOYEES
ON DEPARTMENTS.DEPARTMENT_ID = EMPLOYEES.DEPARTMENT_ID
WHERE EMPLOYEES.DEPARTMENT_ID IS NULL;

select *
from employees
where first_name = "steven";
-- Here is the query for the names of Departments which doesn’t have any employees:

SELECT DEPARTMENTS.DEPARTMENT_NAME
FROM DEPARTMENTS
		LEFT JOIN EMPLOYEES
			ON DEPARTMENTS.DEPARTMENT_ID = EMPLOYEES.DEPARTMENT_ID
WHERE EMPLOYEES.DEPARTMENT_ID IS NULL;
