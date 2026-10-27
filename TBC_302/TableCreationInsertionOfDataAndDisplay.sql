create table employees (
	emp_id   number(2),
	emp_name varchar2(20),
	salary   number(6)
);

insert into employees (
	emp_id,
	emp_name,
	salary
) values ( 1,
           'John',
           24000 );

select *
  from employees;

DELETE EMPLOYEES;

drop table employees;
