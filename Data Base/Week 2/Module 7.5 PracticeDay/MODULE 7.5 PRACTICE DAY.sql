-- In here we will do the practice day work

-- Qustion NO: 1) Show the employee names and corresponding job_titles without using JOIN query

SELECT EMPLOYEES.FIRST_NAME AS NAME , JOBS.JOB_TITLE AS JOB_TITLE
FROM EMPLOYEES, JOBS
WHERE EMPLOYEES.JOB_ID = JOBS.JOB_ID;

-- Qustion NO: 2) Show the employee names and corresponding job_titles WITH using JOIN query

SELECT EMPLOYEES.FIRST_NAME AS NAME , JOBS.JOB_ID
FROM EMPLOYEES
	JOIN JOBS
    ON EMPLOYEES.JOB_ID = JOBS.JOB_ID;
    
-- Qustion NO: 3) Show the name of the employee and the job_title who receives the maximum salary

SELECT EMPLOYEES.FIRST_NAME, JOBS.JOB_TITLE
FROM EMPLOYEES
	JOIN JOBS
		ON EMPLOYEES.JOB_ID = JOBS.JOB_ID
WHERE SALARY = (
				SELECT MAX(SALARY)
                FROM EMPLOYEES);


-- Qustion NO: 4)Show the list of employee name and corresponding manager names.
SELECT E.FIRST_NAME AS EMPLOYEE_NAME , M.FIRST_NAME AS MANAGER_NAME
FROM EMPLOYEES AS M
	JOIN EMPLOYEES AS E
		ON M.EMPLOYEE_ID = E.MANAGER_ID;
