## 1. PRIMARY KEY

a) The PRIMARY KEY defined at column level
 -         create table Employee(empno numeric(4) primary key,ename varchar(10),job varchar(6),sal numeric(5),deptno numeric(7));

b) The PRIMARY KEY defined at table level
-         CREATE TABLE DEPARTMENT(Dname VARCHAR(15) NOT NULL ,Dnumber INT NOT NULL ,Mgr_ssn CHAR(9) NOT NULL ,Mgr_start_date DATE ,PRIMARY KEY (Dnumber) );

## 2. CHECK CONSTRAINT

a) The CHECK Constraint defined at column level
 -         CREATE TABLE Empl1(empno numeric(3),ename varchar(20),design varchar(15),sal numeric(8,2) CHECK(sal>20000 and sal<200001),deptno numeric(2));
b) The CHECK Constraint defined at table level
 -         CREATE TABLE Emp1(empno numeric(3),ename varchar(20),design varchar(15),sal numeric(8,2),deptno numeric(2),CHECK(sal>20000 and sal<200001));

## 3. UNIQUE CONSTRAINT

a) The UNIQUE Constraint defined at the column level
 -         CREATE TABLE Emp3(empno numeric(3),ename varchar(20),design varchar(15) UNIQUE,sal numeric(8,2));
b) The UNIQUE Constraint defined at the the table level
 -         CREATE TABLE Emp2(empno numeric(3),ename varchar(20),design varchar(15),sal numeric(8,2),UNIQUE(design));

## 4. NOT NULL

a) Not Null
-         CREATE TABLE Emp4(empno numeric(4),ename varchar(20) NOT NULL,design varchar(20),sal numeric(8,2));

