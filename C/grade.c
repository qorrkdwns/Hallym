#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("점수를 입력하세요 : ");
    scanf("%d", &score);

   if(score >= 90) {
    grade = 'A';
   }else if(score >= 80) {
    grade = 'B';
   }else if(score >= 70) {
    grade = 'C';
   }else if(score >= 60) {
    grade = 'D';
   }else {
    grade = 'F';
   }

    printf("입력받은 점수 %d의 학점은 %c입니다.\n", score, grade);

    return 0;

}