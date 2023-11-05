USE DUMMYDB;

-- Questions: 1
-- Determine the third highest salary and which employee receives it?
-- MAIN QUERRY
SELECT *
FROM EMPLOYEES
WHERE SALARY = (-- 1ST SUB QURREY
				SELECT MAX(SALARY)
                FROM EMPLOYEES
                WHERE SALARY < (-- 2ND QURREY
								SELECT MAX(SALARY)
                                FROM EMPLOYEES
                                WHERE SALARY < (-- 3RD QURREY 
												SELECT MAX(SALARY)
                                                FROM EMPLOYEES
                                )
                                )
                );

-- Questions: 2
-- Determine the third lowest salary and which employee receives it?
-- MAIN QUERRY
SELECT * 
FROM EMPLOYEES
WHERE SALARY = (-- 1ST QUREY
				SELECT MIN(SALARY)
                FROM EMPLOYEES
                WHERE SALARY > (-- 2ND QUREY
							 SELECT MIN(SALARY)
                             FROM EMPLOYEES
                             WHERE SALARY >(-- 3RD QUREY 
											SELECT MIN(SALARY)
                                            FROM EMPLOYEES
                                            )
								)
				
				);

-- Questions: 3
-- Which employee has been hired after Steven?
-- MAIN QUREY
SELECT *
FROM EMPLOYEES
WHERE HIRE_DATE = ( -- 1ST QUREY
					SELECT MIN(HIRE_DATE)
                    FROM EMPLOYEES
                    WHERE HIRE_DATE > (-- 2ND QUREY
										SELECT MIN(HIRE_DATE)
                                        FROM EMPLOYEES
                                        )
					);

-- Questions: 4
-- With common table expression solve the question 1 and 2
-- THE NUMBER 1
WITH THIRDMAXVAL AS
(
SELECT EMPLOYEE_ID AS MAINID
FROM EMPLOYEES
WHERE SALARY = (-- 1ST SUB QURREY
				SELECT MAX(SALARY)
                FROM EMPLOYEES
                WHERE SALARY < (-- 2ND QURREY
								SELECT MAX(SALARY)
                                FROM EMPLOYEES
                                WHERE SALARY < (-- 3RD QURREY 
												SELECT MAX(SALARY)
                                                FROM EMPLOYEES
                                )
                                )
                )
)
SELECT *
FROM EMPLOYEES
WHERE EMPLOYEE_ID = (SELECT MAINID FROM THIRDMAXVAL);


-- THE NUMBER 2
WITH THIRDMIN AS(
SELECT EMPLOYEE_ID AS MAINID 
FROM EMPLOYEES
WHERE SALARY = (-- 1ST QUREY
				SELECT MIN(SALARY)
                FROM EMPLOYEES
                WHERE SALARY > (-- 2ND QUREY
							 SELECT MIN(SALARY)
                             FROM EMPLOYEES
                             WHERE SALARY >(-- 3RD QUREY 
											SELECT MIN(SALARY)
                                            FROM EMPLOYEES
                                            LIMIT 1
                                            )
									LIMIT 1
								)
						LIMIT 1
				
				)
		LIMIT 1
)

SELECT *
FROM EMPLOYEES
WHERE EMPLOYEE_ID = (SELECT MAINID FROM THIRDMIN)

