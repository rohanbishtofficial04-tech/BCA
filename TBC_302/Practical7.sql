CREATE TABLE Account (
    AccountNo NUMBER PRIMARY KEY,
    CustName VARCHAR2(50) NOT NULL,
    AccountType VARCHAR2(20) DEFAULT 'Saving',
    Balance NUMBER CHECK (Balance > 1000),
    PassportNo VARCHAR2(20) UNIQUE
);

INSERT INTO Account VALUES (117501, 'Puneet', 'Saving', 1100, 'B9895');

INSERT INTO Account (AccountNo, AccountType, Balance, PassportNo) 
VALUES (117502, 'Saving', 2100, 'A9895');

INSERT INTO Account VALUES (117507, 'Rohit', 'Current', 500, 'C9898');  -- This will fail due to Balance constraint

INSERT INTO Account VALUES (117507, 'Rohit', 'Current', 5000, 'C9898'); -- This will fail due to duplicate AccountNo

INSERT INTO Account VALUES (117504, 'Kumar', NULL, 1100, 'C9898'); --this will fail due to same passport_no (unique)

INSERT INTO Account VALUES (117508, 'Shweta', 'Saving', 7100, 'A6789');

INSERT INTO Account (AccountNo, CustName, AccountType, Balance) VALUES (117503, 'Deepak', 'Current', 12000);

select * from account;

commit;

CREATE TABLE Account2 (
    AccountNo NUMBER PRIMARY KEY,
    CustName VARCHAR2(50) NOT NULL,
    AccountType VARCHAR2(20) DEFAULT 'Current',
    Balance NUMBER CHECK (Balance > 5000),
    PassportNo VARCHAR2(20) UNIQUE
);

DESC Account2;

CREATE TABLE Account3 (
    AccountNo NUMBER PRIMARY KEY,
    CustName VARCHAR2(50) NOT NULL
);

SELECT * FROM User_Constraints WHERE table_name = 'ACCOUNT3';

ALTER TABLE Account3 MODIFY CustName NULL;

CREATE TABLE Account4 (
    AccountNo NUMBER CONSTRAINT Pkey PRIMARY KEY,
    CustName VARCHAR2(50) CONSTRAINT NNull NOT NULL,
    AccountType VARCHAR2(20) DEFAULT 'Current',
    Balance NUMBER CONSTRAINT ChkBal CHECK (Balance > 5000),
    PassportNo VARCHAR2(20) CONSTRAINT UU UNIQUE
);

ALTER TABLE Account4 DROP CONSTRAINT Pkey;

ALTER TABLE Account4 DROP CONSTRAINT UU;

CREATE TABLE Account5 (
    AccountNo NUMBER,
    CustName VARCHAR2(50),
    Balance NUMBER
);

ALTER TABLE Account5 ADD CONSTRAINT Pkey5 PRIMARY KEY (AccountNo);

ALTER TABLE Account5 ADD CONSTRAINT UC_CustName UNIQUE (CustName);

ALTER TABLE Account5 ADD CONSTRAINT ChkBal5 CHECK (Balance > 1500);

SELECT * FROM Account5;

DESC Account5;