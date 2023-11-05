CREATE TABLE Student(
	roll varchar(2) primary key,
    name varchar(50)
);

CREATE TABLE course(
	course_id varchar(5) primary key,
    name varchar(50)
);


CREATE TABLE Enroll(
	sroll varchar(2),
    cid varchar(5),
    tarik varchar(10),
    
    foreign key (sroll) references Student(roll)
			on delete cascade, 
	foreign key(cid) references course(course_id)
    			on delete cascade

);


insert into Student(roll, name) values ("01", "sifath");
insert into Student(roll, name) values ("02", "shaik");
insert into course(course_id, name) values ("11100", "Python");
insert into enroll(sroll,cid, tarik) value ("02","11100","10-29-2002");

SET SQL_SAFE_UPDATES = 1;

delete from enroll
where tarik = "10-29-2002";

delete from course
where course_id = "11100";

select *
from enroll;




-- IN Here we Will see about the set oparations
-- WORK OF UNION
SELECT *
FROM EMPLOYEES
WHERE SALARY > 10000
UNION
SELECT *
FROM EMPLOYEES
WHERE DEPARTMENT_ID = 100;

-- WORK OF UNION ALL
SELECT *
FROM EMPLOYEES
WHERE SALARY > 10000
UNION ALL
SELECT *
FROM EMPLOYEES
WHERE DEPARTMENT_ID = 100;
-- WORK OF  INTERSECTION
SELECT *
FROM EMPLOYEES
WHERE SALARY > 10000
INTERSECT
SELECT *
FROM EMPLOYEES
WHERE DEPARTMENT_ID = 100;

-- WORK OF MINUS
SELECT *
FROM EMPLOYEES
WHERE SALARY > 10000 AND DEPARTMENT_ID != 100

