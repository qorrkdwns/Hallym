--최종 복습 문제
--1. 데이터 조회 & 정렬
--나이가 23 이상이고, 이름이 'B'로 시작하는 학생을 조회하고 나이 내림차순 정렬하세요.
SELECT * FROM students WHERE age >= 23;
SELECT * FROM students WHERE name LIKE 'B%';
SELECT * FROM students ORDER BY age DESC;

--2️. 그룹화 & 집계 함수
--같은 나이를 가진 학생을 조회하고, 학생 수가 2명 이상인 나이 그룹만 출력하세요.
SELECT age, COUNT(*) AS student_count FROM students GROUP BY age;
SELECT age, COUNT(*) AS student_count 
FROM students 
GROUP BY age 
HAVING student_count >= 2;

--3️. JOIN 활용
--'Bob'이 수강하는 강좌의 이름을 조회하세요.
SELECT studeunts.name, courses.course_name
FROM students
INNER JOIN courses ON students.id = courses.student_id
WHERE students.name = 'Bob';

--각 강좌(course_name)에 등록된 학생 수를 조회하세요.
SELECT courses.course_name, COUNT(students.id) AS student_count
FROM students
LEFT JOIN courses ON students.id = courses.student_id
GROUP BY courses.course_name;


--4️. 서브쿼리 & 뷰
--'Alice'보다 나이가 많은 학생만 조회하세요.
SELECT * FROM students WHERE age > (SELECT age FROM students WHERE name = 'Alice');

--나이가 22 이하인 학생을 포함하는 뷰 young_students를 생성하세요.
CREATE VIEW young_students AS
SELECT * FROM students WHERE age <= 22;