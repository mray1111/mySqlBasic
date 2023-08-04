CREATE DATABASE ORG;
SHOW DATABASES;
USE ORG;

CREATE TABLE Worker1(
WORKER_ID INT PRIMARY KEY,
FIRST_NAME CHAR(250),
LAST_NAME CHAR(250),
SALARY INT(150),
JOINING_DATE DATETIME,
DEPARTMENT CHAR(250)
);
SHOW TABLES;

INSERT INTO Worker1(WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
(1, 'Monika', 'Arora', 100000, '2020-02-14 09:00:00', 'HR'),
(2, 'Niharika', 'Verma', 80000, '2014-06-11 09:00:00', 'Admin'),
(3, 'Vishal', 'Singhal', 300000, '2020-02-14 09:00:00', 'HR'),
(4, 'Amitabh', 'Singh', 500000, '2020-02-14 09:00:00', 'Admin'),
(5, 'Vivek', 'Bhati', 500000, '2014-06-11 09:00:00', 'Admin');

SHOW TABLES;
SELECT * FROM Worker1;




CREATE TABLE Worker2 (
    WORKER_ID INT PRIMARY KEY,
    FIRST_NAME CHAR(250),
    LAST_NAME CHAR(250),
    SALARY INT,
    JOINING_DATE DATETIME,
    DEPARTMENT CHAR(250)
);


INSERT INTO Worker2 (WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
(6, 'John', 'Doe', 90000, '2019-05-20 09:00:00', 'Finance'),
(7, 'Jane', 'Smith', 75000, '2021-08-10 09:00:00', 'IT'),
(8, 'Michael', 'Johnson', 120000, '2020-11-15 09:00:00', 'Admin');

SELECT * FROM WORKER2;

SELECT * FROM Worker1 UNION SELECT * FROM Worker2;



CREATE TABLE Worker3 (
    WORKER_ID INT PRIMARY KEY,
    FIRST_NAME CHAR(250),
    LAST_NAME CHAR(250),
    SALARY INT,
    JOINING_DATE DATETIME,
    DEPARTMENT CHAR(250)
);

INSERT INTO Worker3 (WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
(9, 'Emily', 'Brown', 85000, '2020-06-30 09:00:00', 'IT'),
(10, 'William', 'Davis', 110000, '2018-04-05 09:00:00', 'Finance'),
(11, 'Olivia', 'Miller', 95000, '2022-01-20 09:00:00', 'Admin');


CREATE TABLE Worker4 (
    WORKER_ID INT PRIMARY KEY,
    FIRST_NAME CHAR(250),
    LAST_NAME CHAR(250),
    SALARY INT,
    JOINING_DATE DATETIME,
    DEPARTMENT CHAR(250)
);


INSERT INTO Worker4 (WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
(12, 'Sophia', 'Wilson', 98000, '2019-11-12 09:00:00', 'Finance'),
(13, 'James', 'Taylor', 75000, '2020-02-03 09:00:00', 'Admin'),
(14, 'Alexander', 'Anderson', 105000, '2021-06-18 09:00:00', 'IT');

SELECT * FROM Worker3, Worker4;

SELECT *FROM Worker3 CROSS JOIN Worker4;

SELECT *FROM WORKER3;
SELECT* FROM WORKER4;


CREATE TABLE Numbers1 (
    num1 INT PRIMARY KEY,
    num2 INT,
    num3 INT,
    num4 INT
);

INSERT INTO Numbers1 (num1, num2, num3, num4) VALUES
(1, 10, 100, 1000),
(2, 20, 200, 2000),
(3, 30, 300, 3000),
(4, 40, 400, 4000),
(5, 50, 500, 5000);


CREATE TABLE Numbers2 (
    num1 INT PRIMARY KEY,
    num2 INT,
    num3 INT,
    num4 INT
);

INSERT INTO Numbers2 (num1, num2, num3, num4) VALUES
(3, 30, 300, 3000),
(4, 40, 400, 4000),
(5, 50, 500, 5000),
(6, 60, 600, 6000),
(7, 70, 700, 7000);

SELECT * FROM Numbers1 NATURAL JOIN Numbers2;



CREATE TABLE Numbers3 (
    num1 INT PRIMARY KEY,
    num2 INT,
    num3 INT,
    num4 INT
);

INSERT INTO Numbers3 (num1, num2, num3, num4) VALUES
(1, 10, 100, 1000),
(2, 20, 200, 2000),
(3, 30, 300, 3000),
(4, 40, 400, 4000),
(5, 50, 500, 5000);


CREATE TABLE Numbers4 (
    num1 INT PRIMARY KEY,
    num2 INT,
    num3 INT,
    num4 INT
);

INSERT INTO Numbers4 (num1, num2, num3, num4) VALUES
(3, 30, 300, 3000),
(4, 40, 400, 4000),
(5, 50, 500, 5000),
(6, 60, 600, 6000),
(7, 70, 700, 7000);


SELECT * FROM Numbers3 JOIN Numbers4 ON Numbers3.num1 > Numbers4.num1;







CREATE TABLE movies (
    movie_id INT AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(250),
    year INT,
    length INT,
    genre VARCHAR(100),
    rating DECIMAL(3, 1),
    typeOFMovie VARCHAR(50)
);
DROP TABLE movies;


CREATE TABLE movies (
    movie_id INT AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(250),
    year INT,
    length INT,
    genre VARCHAR(100),
    rating DECIMAL(3, 1)
);


INSERT INTO movies (title, year, length, genre, rating) VALUES
('Inception', 2010, 148, 'Sci-Fi', 8.8),
('The Dark Knight', 2008, 152, 'Action', 9.0),
('Forrest Gump', 1994, 142, 'Drama', 8.8),
('Pulp Fiction', 1994, 154, 'Crime', 8.9),
('The Shawshank Redemption', 1994, 142, 'Drama', 9.3),
('Breaking Bad', 2008, NULL, 'Crime', 9.5),
('Stranger Things', 2016, NULL, 'Sci-Fi', 8.7);

SELECT * FROM MOVIES;

SELECT * FROM movies WHERE rating <= 8.8 ORDER BY rating;

SELECT * FROM movies WHERE rating > 8.8;
SELECT *FROM movies WHERE  year > 1994;

SELECT year, rating FROM movies;



CREATE TABLE student (
    Roll INT PRIMARY KEY,
    CPI DECIMAL(4, 2),
    department VARCHAR(100)
);

INSERT INTO student (Roll, CPI, department) VALUES
(101, 8.25, 'Computer Science'),
(102, 7.92, 'Electrical Engineering'),
(103, 8.78, 'Mechanical Engineering'),
(104, 9.15, 'Chemical Engineering'),
(105, 7.50, 'Civil Engineering'),
(106, 8.40, 'Electronics and Communication');


CREATE TABLE MedalWinners AS
SELECT Roll, CPI, department
FROM student s 
WHERE (s.department, s.CPI) IN (
    SELECT department, MAX(CPI)
    FROM student
    GROUP BY department
);

INSERT INTO MedalWinners (Roll, CPI, department)
SELECT Roll, CPI, department
FROM student s
WHERE (s.department, s.CPI) IN (
    SELECT department, MAX(CPI)
    FROM student
    GROUP BY department
);

select * from MedalWinners;
