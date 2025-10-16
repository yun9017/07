//
//  main.c
//  07
//
//  Created by 한서윤 on 10/16/25.
//

#include <stdio.h>
int all_files;

extern void sub();

int main(void)
{
    sub(); // extern 통해 다른 파일 함수 연결
    printf("%d\n",all_files);
    return 0;
    }

