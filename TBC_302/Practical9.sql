create table COURSE (
	Course_Code number(10) primary key,
	Course_Name varchar(10),
	Course_Fees number(10),
	Department  varchar2(10)
);

create table STUDENT (
	Roll_No number(5) primary key,
	Name   varchar2(20),
	City    varchar2(20)
);

create table REGISTER (
	Roll_No     number,
	CourseCode number,
	primary key(roll_no,course_code),
    foreign key(roll_no) REFERENCES student(roll_no),
    foreign key(course_code) REFERENCES course(course_code)
);

INSERT INTO COURSE VALUES (101, 'MCA', 80000, 'MCA');

INSERT INTO COURSE VALUES (102, 'MBA', 60000, 'MBA');

INSERT INTO COURSE VALUES (103, 'Btech', 75000, 'Engg');

INSERT INTO COURSE VALUES (104, 'BCA', 30000, 'MCA');

INSERT INTO COURSE VALUES (105, 'BSc(IT)', 25000, 'MCA');

INSERT INTO COURSE VALUES (106, 'MSc(IT)', 35000, 'MCA');

INSERT INTO COURSE VALUES (107, 'BBA', 22000, 'MBA');

INSERT INTO STUDENT VALUES (1, 'Amit', 'Delhi');

INSERT INTO STUDENT VALUES (2, 'Sumit', 'Goa');

INSERT INTO STUDENT VALUES (3, 'Shweta', 'Gwaliar');

INSERT INTO STUDENT VALUES (4, 'Kumar', 'Goa');

INSERT INTO STUDENT VALUES (5, 'Puneet', 'Meerut');

INSERT INTO STUDENT VALUES (6, 'Bharat', 'Gwaliar');

INSERT INTO REGISTER VALUES (2, 101);

INSERT INTO REGISTER VALUES (4, 103);

INSERT INTO REGISTER VALUES (5, 101);

INSERT INTO REGISTER VALUES (3, 105);

INSERT INTO REGISTER VALUES (1, 103);

SELECT * FROM COURSE;

SELECT * FROM STUDENT;

SELECT * FROM REGISTER;

SELECT * FROM STUDENT where roll_no not in (select roll_no from REGISTER);

SELECT * FROM student JOIN register using(roll_no);

SELECT * FROM student where roll_no in(select roll_no from register);

SELECT max(Course_Fees) from COURSE where Course_Fees not in (select max(Course_Fees) from COURSE where Course_Fees not in (select max(Course_Fees) from COURSE));

SELECT sum(Course_Fees) TotalSumOfAllFees from COURSE;

SELECT Department,sum(Course_Fees) TotalDepartmentFees from COURSE GROUP BY Department HAVING sum(Course_Fees)>80000;

SELECT Department,sum(Course_Fees) TotalDepartmentFees from COURSE WHERE Course_Fees IN(SELECT Course_Fees from COURSE WHERE Course_Fees>30000) GROUP BY Department;

select * from tab;

COMMIT;