//
//  main.c
//  07
//
//  Created by 한서윤 on 10/16/25.
//

#include <stdio.h>

int inc(int counter);

int main(void) {
    int i=10;
    printf("함수 호출전 i = %d\n", i);
    inc(i); // i = inc(i)의 경우 반환값 활용 -> +1, i=11 출력
    printf("함수 호출후 i = %d\n", i);
    return 0;
}
int inc(int counter)
{
    counter++;
    return counter;
}
