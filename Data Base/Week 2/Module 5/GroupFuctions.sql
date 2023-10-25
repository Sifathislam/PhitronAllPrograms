-- In Heree we will see that  how we can use the function on the grouply 

-- **MAX** --
 
SELECT MAX(salary)
FROM employees
WHERE manager_id = 100; -- you can add conditon on it 

-- **MIN** --
SELECT MIN(salary)
FROM employees
WHERE manager_id = 100; -- you can add conditon on it 

-- **COUNT** --
SELECT COUNT(*)
FROM employees;

-- **AVARAGE** --
SELECT AVG(salary) AS AVGS ,MAX(salary) AS MAXS
FROM employees;

-- **SUM** --
SELECT SUM(salary)
FROM employees;


-- NOW WE WILL SE GROUP BY AND  HAVING
SELECT department_id , MIN(salary)
FROM employees
GROUP BY department_id
HAVING department_id > 20


