//
//  main.c
//  0. variable, constant, data type, operator
//
//  Created by 박지현 on 2023/04/09.
//

#include <stdio.h>


int main() {
    /*1) 결과값 출력
    int a = 3;
    printf("%d\n", a>>2);
    printf("%d\n", a<<2);*/
    
    /*2) 결과값 출력
    int i = 10;
    printf("%d\n", ++i);
    printf("%d\n", i++);
    printf("%d\n", i); */
    
    /*3-1) 입력 받은 수가 짝수인지 홀수인지 판단하여 출력하기 (if문 사용)
    int i;
    scanf("%d", &i);
    if(i % 2 == 0) {
        printf("짝수 \n");
    }else
        printf("홀수 \n");*/
    
    /*3-2) 조건 연산자 사용
    int i;
    scanf("%d", &i);
    i % 2 == 0 ? printf("짝수 \n") : printf("홀수 \n"); */
    
    /*4) 결과값 출력
    int i = 1, j = 9;
    printf("%d & %d = %d\n", i, j, i&j);
    printf("%d | %d = %d\n", i, j, i|j);
    printf("%d ^ %d = %d\n", i, j, i^j); */
    
    /*코드 입력
     5) <조건> if문 사용
     - 정수 year 입력
     - year가 4의 배수이고 100의 배수가 아닌 경우
     또는 year가 400의 배수인 경우 "leaf year" 출력
     - 그렇지 않은 경우 "common year" 출력
    int year;
    printf("year : ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("leaf year\n");
    } else
        printf("common year\n"); */
    
    /*5) 조건 연산자 사용
    int year;
    printf("year : ");
    scanf("%d", &year);
    year % 4 == 0 && year % 100 != 0 || year % 400 == 0?printf("leaf year\n"): printf("common year\n"); */
    
    /*6) <조건>
     - PI를 3.14의 기호 상수로 설정
     - 실수(float)형태의 r 입력
     - 원의 넓이(area) 출력
#define PI 3.14
    float r;
    printf("r : ");
    scanf("%f", &r);
    printf("r = %f area = %f\n", r, r*r*PI); */
    
    /*7) <조건>
     - 정수 a를 1로 초기화
     - 증감 연산자(++)를 이용하여 a를 10까지 출력(1씩 증가)
     - 반복문 사용할 것
    int a = 1;
    for(a=1; a<=10; a++)
        printf("a = %d\n", a); */
    
    /*8) <조건>
     - 정수 a값을 입력 받음
     - a가 2의 배수이면 "even number" 출력,
     그렇지 않으면 "odd number" 출력
     - 조건 연산자 사용할 것
     
    int a;
    printf("a = ");
    scanf("%d", &a);
    a % 2 == 0 ? printf("even number\n") : printf("odd number\n"); */
    return 0;
}
