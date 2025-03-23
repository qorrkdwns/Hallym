/*Step 1: 데이터 필터링과 정렬
1. WHERE 조건절
WHERE는 특정 조건에 따라 데이터를 필터링하는 데 사용됩니다.

SELECT * FROM students WHERE age >= 23;
SELECT * FROM students WHERE name LIKE 'A%';

설명:
age >= 23: 나이가 23 이상인 데이터만 조회
name LIKE 'A%': 이름이 A로 시작하는 학생만 조회

2. ORDER BY 정렬
데이터를 특정 열을 기준으로 정렬할 때 사용합니다.

SELECT * FROM students ORDER BY age DESC;

설명:
age DESC: 나이를 기준으로 내림차순 정렬
기본값은 ASC로, 오름차순 정렬입니다.

Step 2: 데이터 집계
1. GROUP BY 그룹화
데이터를 특정 열을 기준으로 그룹화하고, 각 그룹에 대한 집계 값을 계산합니다.

SELECT age, COUNT(*) AS student_count
FROM students
GROUP BY age;

설명:
같은 나이를 가진 학생 수를 계산

2. HAVING 조건 추가
GROUP BY와 함께 사용되어 그룹화된 데이터에 조건을 추가합니다.

SELECT age, COUNT(*) AS student_count
FROM students
GROUP BY age
HAVING student_count > 1;
설명:
그룹화된 데이터 중 학생 수가 1명 초과인 그룹만 조회
 */

 -- 문제 1 : 데이터 필터링
 -- 나이가 23 이상이고 이름이 'A'로 시작하는 학생을 조회하세요.
SELECT * FROM students WHERE age >= 23 AND name LIKE 'A%';

 -- 문제 2 : 데이터 정렬
 -- 학생 데이터를 나이를 기준으로 내림차순으로 정렬하세요.
SELECT * FROM students ORDER BY age DESC; --오름차순은 ASC

 -- 문제 3 : 데이터 그룹화
 -- 같은 나이를 가진 학생 수를 출력하세요.
SELECT age, COUNT(*) AS student_count
FROM students
GROUP BY age;

 -- 문제 4 : 그룹화된 데이터 조건
 -- 학생 수가 2명 이상인 나이 그룹만 조회하세요.
SELECT age, COUNT(*) AS student_count
FROM students
GROUP BY age
HAVING student_count >= 2;