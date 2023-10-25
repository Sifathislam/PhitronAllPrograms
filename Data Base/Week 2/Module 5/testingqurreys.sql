-- This how we can see all the data form database
SELECT *
FROM employees;

-- For the spacific section or table or the culomun data want to view have to do this

SELECT first_name,  last_name
FROM employees;

-- Now see the work of where query 
SELECT first_name , last_name, salary, manager_id
FROM employees
WHERE salary > 5000 AND manager_id != 100;

-- Now see the work of arithmatic oparator 

SELECT 9 - 1;
SELECT 9 + 2;
SELECT 9 / 3;
SELECT 9 % 2;

-- IN here we will see about distinct
SELECT DISTINCT job_id
FROM employees;

-- IN here we will see about order by 

SELECT first_name, last_name, salary
FROM employees
ORDER BY salary ASC;

-- IN here we will see about limit and off side togther 

SELECT first_name, last_name
FROM employees
LIMIT 4, 5;

-- IN here we will see about like and as

SELECT first_name , last_name
FROM employees
WHERE last_name LIKE '%ee%';

SELECT first_name, last_name, salary AS slary
FROM employees
HAVING slary > 10000;

