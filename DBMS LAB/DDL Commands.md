1. ##CREATION OF TABLE

create table employee(empno numeric(5),ename varchar(15),job varchar(15),deptno numeric(3));

2. ## ALTER TABLE

a) To add column to excisting table:
        alter table employee add(phone_no numeric(10));
b) To add multiple columns to excisting table:
        alter table employee add(salary numeric(8,2),age numeric(2));
c) dropping a column from a table:
        alter table employee drop column phone_no;
d) modifying excisting column:
        alter table employee modify ename varchar(25);
e) To rename a column:
        alter table employee change column e_name varchar(25);
        
3. ## RENAMING TABLE

alter table employee rename to emp;

4. ## TRUNCATE TABLE

truncate table employee;

5. ## DESTROYING TABLES

drop table employee;

6. ## DESCRIBING TABLES

desc employee
