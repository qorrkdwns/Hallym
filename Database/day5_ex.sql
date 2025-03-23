/*실습 문제 1: 서브쿼리를 사용한 데이터 조회
문제:
학생 중 가장 나이가 많은 학생을 조회하세요.
(힌트: MAX() 함수와 서브쿼리를 활용)*/

SELECT * FROM students WHERE age = (SELECT MAX(age) FROM students);

/*실습 문제 2: 서브쿼리를 사용한 데이터 필터링
문제:
Alice보다 나이가 많은 학생만 조회하세요.
(힌트: Alice의 나이를 서브쿼리로 구한 후 필터링) */

SELECT * FROM students WHERE age > (SELECT age FROM students WHERE name = 'Alice');

/*실습 문제 3: 뷰(View) 생성
문제:
나이가 25 이상인 학생을 조회하는 뷰 senior_students를 생성하세요.
이후, senior_students 뷰에서 데이터를 조회하는 SQL문도 작성하세요. */

--DROP VIEW IF EXISTS senior_students;
CREATE VIEW senior_students AS
SELECT * FROM students WHERE age >= 25;
SELECT * FROM senior_students;

/* 실습 문제 4: 뷰(View) 활용
문제:
senior_students 뷰를 이용해, 학생 이름과 나이를 조회하세요. */

SELECT name, age FROM senior_students;