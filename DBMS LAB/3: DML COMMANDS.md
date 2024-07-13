1. ## INSERT COMMAND

a) Inserting a single row into a table:
-         INSERT INTO EMPLOYEE VALUES(101,'MANU','LECTURER',15000);
b) Inserting more than one record using a single insert commands:
-        INSERT INTO EMPLOYEE(EMPNO,ENAME,DESIGNATIN,SALARY)VALUES(1,'a','clerk',20000),(2,'b','peon',15000);
c) Skipping the fields while inserting:
-        INSERT INTO EMPLOYEE (EMPNO,ENAME) VALUES(3,'c');

2. ## SELECT COMMAND

a) view all rows and all columns:
-        Select * from Employee;
b) Selected Columns And All Rows:
-        Select empno, empname from Employee;
c) Selected Columns And selected Rows:
-        Select empno, empname from Employee where designation=’lecturer’;
d)Eliminating duplicate rows
-        Select distinct empname from Employee;

3. ## UPDATE COMMAND

a)updating all rows:
-        Update Employee set Designation = ‘lecturer’;
b)updating records conditionally
-        Update Employee set sal = 10000 where empno=135;

4. ## DELETE COMMAND

a)Removal of all rows:
-        Delete from emp;
b)removal of specific rows:
-        delete from emp where empno=135;

