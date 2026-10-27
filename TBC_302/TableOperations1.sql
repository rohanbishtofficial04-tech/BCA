create table employee (
	emp_code number(6),
	name     varchar2(6),
	salary   number(6)
);

desc employee;

alter table employee modify name varchar2(25);

alter table employee drop ( name,emp_code );

alter table employee rename column salary to salary1;

rename employee to emp1;

desc emp1;

drop table emp1;
