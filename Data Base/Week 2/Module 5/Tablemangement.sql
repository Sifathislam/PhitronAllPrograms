CREATE database module5;
USE module5;

-- Now which function we work with this can add modify and delete table
 -- **ADD** --
CREATE TABLE regions (
	region_id INT (11) UNSIGNED NOT NULL,
	region_name VARCHAR(25),
	PRIMARY KEY (region_id)
	);

 -- **ADD** --
ALTER TABLE regions
ADD COLUMN ocean_name VARCHAR(40);

 -- **DELETE** --
 
ALTER TABLE regions
DROP COLUMN region_id;

 -- **MODIFY** --
 ALTER TABLE regions
 MODIFY COLUMN ocean_name INT;


INSERT INTO regions(region_name,ocean_name) VALUES ("BANGLADESH", 100);

SELECT *
FROM regions
