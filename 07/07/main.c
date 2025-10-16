//
//  main.c
//  07
//
//  Created by 한서윤 on 10/16/25.
//

#include <stdio.h>

void f(void);

int i;
int main(void)
{
    for (i=0; i<5; i++)
    {
        f();
    }
    return 0;
}
    void f(void)
{
    for (i=0; i<10; i++)
        printf("#");
}

