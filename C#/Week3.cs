using System;
using static System.Runtime.InteropServices.JavaScript.JSType;

//3주차 실습 20215166 백강준

/*문제 1: 달력 월 출력하기 (switch case 활용)
사용자로부터 1~12 사이의 숫자를 입력받아 해당하는 월의 이름과 일수(28일/30일/31일)를 출력하
는 프로그램을 작성하세요. switch case 문을 활용하여 작성합니다.
(윤년은 고려하지 않습니다. 2월은 28일로 계산합니다.) */

/*
Console.Write("1부터 12 사이의 월을 입력하세요: ");
int month = int.Parse(Console.ReadLine());
if(month < 1 || month > 12)
{
    Console.WriteLine("1~12 사이의 숫자를 입력하세요.");
    return;
}

switch (month) 
{
    case 1:
        Console.WriteLine("1월은 31일까지 있습니다.");
        break;
    case 2:
        Console.WriteLine("2월은 28일까지 있습니다.");
        break;
    case 3:
        Console.WriteLine("3월은 31일까지 있습니다.");
        break;
    case 4:
        Console.WriteLine("4월은 30일까지 있습니다.");
        break;
    case 5:
        Console.WriteLine("5월은 31일까지 있습니다.");
        break;
    case 6:
        Console.WriteLine("6월은 30일까지 있습니다.");
        break;
    case 7:
        Console.WriteLine("7월은 31일까지 있습니다.");
        break;
    case 8:
        Console.WriteLine("8월은 31일까지 있습니다.");
        break;
    case 9:
        Console.WriteLine("9월은 30일까지 있습니다.");
        break;
    case 10:
        Console.WriteLine("10월은 31일까지 있습니다.");
        break;
    case 11:
        Console.WriteLine("11월은 30일까지 있습니다.");
        break;
    case 12:
        Console.WriteLine("12월은 31일까지 있습니다.");
        break;
}
*/

/*문제 2: 구구단 출력하기 (다중 for문 활용)
2단부터 9단까지의 구구단을 출력하는 프로그램을 작성하세요. 
각 단은 1부터 9까지 곱한 결과를 출력하며, 
단이 바뀔 때마다 구분선을 출력하세요.
*/

/*
for(int i = 2; i <=9; i++)
{
    Console.WriteLine("--- " + i + " ---");
    for (int j = 1; j <= 9; j++)
    {
        Console.WriteLine(i + " * " + j + " = " + i * j);
    }
    Console.WriteLine();
}
*/

/*
 문제2 변형
구구단 문제를 테이블 형태로 변형했습니다. 
이 코드는 구구단을 3x4 테이블 형태로 출력합니다:
첫 줄에는 1, 2, 3단이 나란히 표시됩니다. 
두 번째 줄에는 4, 5, 6단이 표시됩니다. 
세 번째 줄에는 7, 8, 9단이 표시됩니다. 
네 번째 줄에는 10, 11, 12단이 표시됩니다. 
각 단은 탭(\t)을 사용하여 구분하고, 각 행의 구구단이 끝난 후에는 빈 줄을 추가하여 
가독성을 높였습니다. 코드는 다음과 같은 방식으로 작동합니다:
 */

/*
for (int i = 1; i <= 12; i += 3)
{
    Console.WriteLine("--- " + i + "단 ---" + "\t" + "--- " + (i+1) + "단 ---" + "\t" + "--- " + (i+2) + "단 ---");
    for (int j = 1; j <= 9; j++)
    {
        for (int k = i; k <= i + 2; k++)
        {
            Console.Write(k + " * " + j + " = " + k * j + "\t");
        }
        Console.WriteLine();
    }
    Console.WriteLine();
}
*/

/*
 문제 3: 소수 판별하기 (다중 if문 활용)
사용자로부터 양의 정수를 입력받아 그 수가 소수(Prime Number)인지 
판별하는 프로그램을 작성하세요. 소수는 1과 자기 자신으로만 나누어 떨어지는 수입니다. 
>> 실행 결과
양의 정수를 입력하세요: 5
5은(는) 소수입니다. 

양의 정수를 입력하세요: 222
222은(는) 소수가 아닙니다. 
 */

/*
Console.Write("양의 정수를 입력하세요: ");
int number = int.Parse(Console.ReadLine());


if(number == 1)
{
    Console.WriteLine("1은 소수가 아닙니다.");
    return;
}
else if(number == 2)
{
    Console.WriteLine("2는 소수입니다.");
}
else
{
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            Console.WriteLine(number + "은(는) 소수가 아닙니다.");
            break;
        }
        else
        {
            if (i == number - 1)
            {
                Console.WriteLine(number + "은(는) 소수입니다.");
            }
        }
    }
   
}
*/

/*
 문제3 변형
소수가 입력될때까지 반복해서 숫자를 받음

출력예시:
소수 판별 프로그램
소수가 입력될 때까지 계속 반복합니다. 
숫자를 입력하세요: 30
30은(는) 소수가 아닙니다. 

숫자를 입력하세요: 5
5은(는) 소수입니다!
프로그램을 종료합니다.
 */


/*
while (true)
{
    Console.Write("숫자를 입력하세요: ");
    int num = int.Parse(Console.ReadLine());

    if (num <= 0)
    {
        Console.WriteLine(num + "은(는) 소수가 아닙니다.");
        continue;
    }
    if (num == 1)
    {
        Console.WriteLine(num + "은(는) 소수가 아닙니다.");
        continue;
    }
    if (num == 2)
    {
        Console.WriteLine(num + "은(는) 소수입니다!");
        Console.WriteLine("프로그램을 종료합니다.");
        break;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                Console.WriteLine(num + "은(는) 소수가 아닙니다.");
                break;
            }
            else
            {
                if (i == num - 1)
                {
                    Console.WriteLine(num + "은(는) 소수입니다!");
                    Console.WriteLine("프로그램을 종료합니다.");
                    return;
                }
            }
        }
    }
}
*/

/*
 문제 4: 삼각형 별 출력하기 (중첩 for문 활용)
사용자로부터 높이를 입력받아 삼각형 모양으로 별을 출력하는 프로그램을 작성하세요. 추가로 출력할 삼각형의 종류를 1~3 중에서 선택할 수 있게 하세요. 
예시:
종류 1 (높이 5) *
**
***
****
***** 종류 2 (높이 5)
 *
 **
 ***
****
***** 종류 3 (높이 5)
 *
 ***
 *****
*******
*********
 */

/*
Console.Write("삼각형의 높이를 입력하세요: ");
int height = int.Parse(Console.ReadLine());
Console.Write("삼각형의 종류를 선택하세요 (1~3): ");
int type = int.Parse(Console.ReadLine());

switch(type)
{
    case 1:
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                Console.Write("*");
            }
            Console.WriteLine();
        }
        break;
    case 2:
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j < (height-i-1); j++)
            {
            Console.Write(" ");
            }
            for(int k = 0; k<=i; k++)
            {
                Console.Write("*");
            }
            Console.WriteLine();
        }
        break;
    case 3:
        for(int i = 1; i <= height; i++)
        {
            for(int j = 0; j <= (height - i - 1); j++)
            {
                Console.Write(" ");
            }
            for(int k = 1; k <= (2 * i - 1); k++)
            {
                Console.Write("*");
            }
            Console.WriteLine();
        }
        break;
}
*/

/*
 문제 5: 요일 계산기 (switch case와 if문 활용)
사용자로부터 년(2000-2100), 월(1-12), 일(1~31)을 입력받아 해당 날짜의 요일을 출력하는 프로그램
을 작성하세요.
(요일 계산은 Zeller's Congruence 알고리즘을 사용합니다)
Zeller의 합동식 수식
요일을 계산하는 공식 :
h = (q + (13 * (m + 1) / 5) + K + (K / 4) + (J / 4) - 2 * J) % 7
h는 요일 (0=토요일, 1=일요일, 2=월요일, ..., 6=금요일)
q는 일(day of month)
m은 월(month)이며, 3월은 3, 4월은 4, ... 12월은 12, 1월은 13, 2월은 14로 간주합니다. K는 연도(year)의 마지막 두 자리 수
J는 연도(year)의 첫 두 자리 수
즉, 1월과 2월은 이전 년도의 13월과 14월로 간주됩니다. 예시 계산
2023년 5월 15일의 요일을 계산해 보겠습니다:
q = 15 (15일)
m = 5 (5월)
연도 = 2023
K = 23 (2023의 마지막 두 자리)
J = 20 (2023의 첫 두 자리)
계산:
h = (15 + ⌊(13(5+1))/5⌋ + 23 + ⌊23/4⌋ + ⌊20/4⌋ - 2*20) mod 7
h = (15 + ⌊78/5⌋ + 23 + ⌊5.75⌋ + ⌊5⌋ - 40) mod 7
h = (15 + 15 + 23 + 5 + 5 - 40) mod 7
h = 23 mod 7
h = 2
따라서 2023년 5월 15일은 월요일입니다. 출력예시:
년도를 입력하세요 (2000-2100): 2025
월을 입력하세요 (1-12): 3
일을 입력하세요 (1-31): 20
2025년 3월 20일은 목요일입니다. 
 */

/*
Console.Write("년도를 입력하세요 (2000-2100): ");
int year = int.Parse(Console.ReadLine());
Console.Write("월을 입력하세요 (1-12): ");
int month = int.Parse(Console.ReadLine());
Console.Write("일을 입력하세요 (1-31): ");
int day = int.Parse(Console.ReadLine());

int q = day;
int m = month;
int K = year % 100;
int J = year / 100;

if(m <= 2)
{
    m += 12;
    K--;
}

int h = (q + (13 * (m + 1) / 5) + K + (K / 4) + (J / 4) - 2 * J) % 7;

if (h < 0)
{
    h += 7;
}

switch (h)
{
    case 0:
        Console.WriteLine(year + "년 " + month + "월 " + day + "일은 토요일입니다.");
        break;
    case 1:
        Console.WriteLine(year + "년 " + month + "월 " + day + "일은 일요일입니다.");
        break;
    case 2:
        Console.WriteLine(year + "년 " + month + "월 " + day + "일은 월요일입니다.");
        break;
    case 3:
        Console.WriteLine(year + "년 " + month + "월 " + day + "일은 화요일입니다.");
        break;
    case 4:
        Console.WriteLine(year + "년 " + month + "월 " + day + "일은 수요일입니다.");
        break;
    case 5:
        Console.WriteLine(year + "년 " + month + "월 " + day + "일은 목요일입니다.");
        break;
    case 6:
        Console.WriteLine(year + "년 " + month + "월 " + day + "일은 금요일입니다.");
        break;
}
*/
