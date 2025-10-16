//
//  main.c
//  07
//
//  Created by 한서윤 on 10/16/25.
//

#include <stdio.h>
static int all_files; // main.c에서만 쓸 수 있게

extern void sub();

int main(void)
{
    sub();
    printf("%d\n",all_files);
    return 0;
    }

