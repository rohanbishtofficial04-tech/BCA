CREATE TABLE Employee_section (
    EmpCode NUMBER,
    Name VARCHAR2(6),
    Salary NUMBER
);

DESCRIBE Employee_section;

INSERT INTO Employee_section (EmpCode, Name, Salary) VALUES (101, 'Amit', 30000);
INSERT INTO Employee_section (EmpCode, Name, Salary) VALUES (201, 'Kapil', 22000);
INSERT INTO Employee_section (EmpCode, Name, Salary) VALUES (301, 'Rohit', 45000);
INSERT INTO Employee_section (EmpCode, Name, Salary) VALUES (401, 'Amit', 27000);
INSERT INTO Employee_section (EmpCode, Name, Salary) VALUES (401, 'Amit', 27000);

SELECT * FROM Employee_section;

INSERT INTO Employee_section (EmpCode, Name, Salary) VALUES (901, 'Bhattacharya', 33000);

COMMIT;

