//
//  main.c
//  07
//
//  Created by 한서윤 on 10/16/25.
//

#include <stdio.h>

int main(void) {
    int i;
    
    for(i=0; i<5; i++)
    {
        static int temp = 1; // static 추가 - 소멸되지 않고 끝까지
        printf("temp = %d\n", temp);
        temp++;
    }
    return 0;
}
