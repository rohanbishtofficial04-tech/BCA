create table student (
	roll_no number(6),
	name    varchar2(15),
	city    varchar2(12),
	pincode varchar2(8),
	age     number(2)
);

INSERT INTO STUDENT VALUES(1,'amit','delhi','214213',21);
INSERT INTO STUDENT(roll_no,name,city,age) VALUES(2,'kumar','bombay',21);
INSERT INTO STUDENT VALUES(3,'kshitij','madras','110101',16);
INSERT INTO STUDENT VALUES(4,'puneet','calcutta','110107',18);
INSERT INTO STUDENT VALUES(5,'rohit','delhi','502207',19);
INSERT INTO STUDENT(roll_no,name,city,age) VALUES(6,'karnal','dehradun',28);
INSERT INTO STUDENT VALUES(7,'shweta','dehradun','98102',23);
INSERT INTO STUDENT VALUES(8,'mohit','bombay','12434',22);
INSERT INTO STUDENT(roll_no,name,city,age) VALUES(9,'pankaj','bombay',17);
INSERT INTO STUDENT VALUES(10,'parul','delhi','76312',24);
INSERT INTO STUDENT VALUES(11,'rohit','baroda','12131',29);

select name from student where city='delhi';

INSERT INTO STUDENT(name,pincode) values('manish','314136');
INSERT INTO STUDENT(roll_no,name,pincode,age) values(14,'aviral','319143',29);
INSERT INTO STUDENT(roll_no,city,pincode,age) values(15,'gwalior','319149',25);


UPDATE STUDENT set roll_no=13 where name='manish';

UPDATE STUDENT set name='abhijeet' where roll_no=15;

UPDATE STUDENT set city='meerut' where roll_no IN (13,14);

UPDATE STUDENT set age=age+3;

UPDATE STUDENT set age=25 where city='meerut';

INSERT INTO STUDENT VALUES(16,'abhinav','delhi','214213',28,20000);

DELETE FROM STUDENT where name='abhinav';

ALTER TABLE STUDENT ADD balance number(6);

UPDATE STUDENT set balance=20000;

UPDATE STUDENT set balance=balance+500 where city IN ('bombay','delhi');

select max(balance) from student;

select min(balance) from student;

select sum(balance) from student;

select avg(balance) from student;

ALTER TABLE STUDENT modify balance number(10);

ALTER TABLE STUDENT MODIFY CITY varchar2(10);

CREATE TABLE student2 as SELECT * FROM student;

CREATE table student3 as SELECT * from student where 1=0;

SELECT * FROM STUDENT;

SELECT * FROM STUDENT2;

SELECT * from STUDENT3;

INSERT into STUDENT3(roll_no,name) select roll_no,name from student;

delete from student2 where age>=25;

delete student2;

drop table student2;

create table bca as select roll_no,name,balance from student where 1=0;

desc bca;

drop table bca;

create table bca2 as select roll_no,name,balance from student;

desc bca2;

select * from bca2;

drop table bca2;

select * from student where name like 'a%';

select * from student where name like '%t';

select * from student where age>=25 and city='dehradun' and roll_no>6;

select distinct city from student;

select name from student order by name;

select name from student order by name desc;

select * from student where city!='dehradun';

select * from student where age<25 or city='dehradun';

desc student;

desc student2;

desc student3;

ROLLBACK;

COMMIT;

select * from tab;