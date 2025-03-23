/*DML 명령어의 기본 문법
아래는 주요 DML 명령어와 기본 문법입니다.

1) SELECT 문법: 데이터 조회
SELECT 컬럼명1, 컬럼명2, ... 
FROM 테이블명 
WHERE 조건;
특정 컬럼 조회: SELECT name, age FROM students;
조건 조회: SELECT * FROM students WHERE age > 20;

2) INSERT 문법: 데이터 삽입
INSERT INTO 테이블명 (컬럼명1, 컬럼명2, ...) 
VALUES (값1, 값2, ...);
예: INSERT INTO students (name, age) VALUES ('Alice', 22);

3) UPDATE 문법: 데이터 수정
UPDATE 테이블명 
SET 컬럼명1 = 값1, 컬럼명2 = 값2, ...
WHERE 조건;
예: UPDATE students SET age = 23 WHERE name = 'Alice';

4) DELETE 문법: 데이터 삭제
DELETE FROM 테이블명 
WHERE 조건;
예: DELETE FROM students WHERE age < 18;
*/
DROP TABLE Students; --기존 테이블 삭제
CREATE TABLE students (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    age INTEGER NOT NULL
);

--실습 문제 1 : 학생 데이터 추가
INSERT INTO students (name, age) VALUES ('Alice', 22);
INSERT INTO students (name, age) VALUES ('Bob', 24);

--실습 문제 2 : 학생 데이터 조회 
SELECT * FROM students;
SELECT * FROM students WHERE age >= 23;

--실습 문제 3 : 학생 데이터 수정 
UPDATE students SET age = 23 WHERE name = 'Alice';

--실습 문제 4 : 학생 데이터 삭제
DELETE FROM students WHERE age < 20;

SELECT * FROM students;
