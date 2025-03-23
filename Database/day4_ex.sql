/*1. 조인(Join)이란?
조인은 두 개 이상의 테이블을 연결하여 데이터를 조회하는 데 사용됩니다.
조인의 종류:
INNER JOIN: 두 테이블에서 공통된 데이터를 조회합니다.
LEFT JOIN: 왼쪽 테이블의 모든 데이터와 오른쪽 테이블에서 일치하는 데이터를 조회합니다.
RIGHT JOIN: 오른쪽 테이블의 모든 데이터와 왼쪽 테이블에서 일치하는 데이터를 조회합니다.
FULL OUTER JOIN: 두 테이블의 모든 데이터를 조회합니다(공통되지 않는 데이터 포함).
(SQLite는 FULL OUTER JOIN을 지원하지 않으므로 UNION으로 구현해야 합니다.) */

DROP TABLE students;
CREATE TABLE IF NOT EXISTS students (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    age INTEGER NOT NULL
);

DROP TABLE courses;
CREATE TABLE IF NOT EXISTS courses (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    student_id INTEGER NOT NULL,
    course_name TEXT NOT NULL,
    FOREIGN KEY (student_id) REFERENCES students (id)
);

INSERT INTO students (name, age) VALUES ('Alice', 23);
INSERT INTO students (name, age) VALUES ('Bob', 24);
INSERT INTO students (name, age) VALUES ('Charlie', 22);

INSERT INTO courses (student_id, course_name) VALUES (1, 'Math');
INSERT INTO courses (student_id, course_name) VALUES (1, 'Science');
INSERT INTO courses (student_id, course_name) VALUES (2, 'History');
INSERT INTO courses (student_id, course_name) VALUES (3, 'Math');
INSERT INTO courses (student_id, course_name) VALUES (3, 'Art');

--INNER JOIN : 학생과 그들이 수강하는 강좌 조회
SELECT students.name, students.age, courses.course_name
FROM students
INNER JOIN courses
ON students.id = courses.student_id;

--LEFT JOIN : 모든 학생과 그들의 강좌 (강좌 없는 학생 포함)
SELECT students.name, students.age, courses.course_name
FROM students
LEFT JOIN courses
ON students.id = courses.student_id;

--RIGHT JOIN: 모든 강좌와 수강하는 학생 (SQLite에서 구현하려면 UNION 사용)
SELECT students.name, students.age, courses.course_name
FROM students
LEFT JOIN courses
ON students.id = courses.student_id
UNION
SELECT students.name, students.age, courses.course_name
FROM students
RIGHT JOIN courses
ON students.id = courses.student_id;

--문제 1 : 특정 학생의 수강 강좌 조회
--학생 이름이 'Alice'인 학생의 수강하는 강좌를 조회하세요.
SELECT students.name, students.age, courses.course_name
FROM students
INNER JOIN courses
ON students.id = courses.student_id
WHERE students.name = 'Alice';

--문제 2 : 강좌별 학생 수 조회
--각 강좌(course_name)에 등록된 학생 수를 조회하세요.
SELECT courses.course_name, COUNT(students.id) AS student_count
FROM students
LEFT JOIN courses
ON students.id = courses.student_id
GROUP BY courses.course_name;


--문제 3 : 강좌 없는 학생 수 조회
--강좌를 수강하지 않은 학생만 조회하세요.
SELECT students.name, students.age
FROM students
RIGHT JOIN courses
ON students.id = courses.student_id
WHERE courses.student_id IS NULL;


--문제 4 : 모든 학생과 강좌를 조회 (공통 데이터 + 독립 데이터)
--모든 학생과 모든 강좌를 포함하도록 데이터를 조회하세요.
-- 학생 기준으로 LEFT JOIN
SELECT students.name, students.age, courses.course_name
FROM students
LEFT JOIN courses
ON students.id = courses.student_id
UNION ALL
-- 강좌 기준으로 LEFT JOIN
SELECT students.name, students.age, courses.course_name
FROM courses
LEFT JOIN students
ON students.id = courses.student_id;





