//
//  main.c
//  07
//
//  Created by 한서윤 on 10/16/25.
//

#include <stdio.h>

void sub(void);

int main(void)
{
    int i;
    for (i=0; i<3; i++)
        sub();
    return 0;
    }

void sub(void)
{
    int auto_count = 0;
    static int static_count = 0;
    auto_count++;
    static_count++;
    printf("auto_count = %d\n",auto_count);
    printf("static_count = %d\n",static_count);
}

