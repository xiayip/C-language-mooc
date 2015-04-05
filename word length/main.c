//
//  main.c
//  单词长度
//
//  Created by xiayip's mac on 15/4/4.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>
#include "string.h"
int main(int argc, const char * argv[]) {
    int n,p = 0;
    unsigned long num[100] = {0};
    char a[100][100]={0};
    for (p = 0; p < 100; p++) {
        scanf("%s",a[p]);
        if (strchr(a[p], '.')) {
            num[p] = strlen(a[p]) - 1;                  //最后一个字符数组减1
            break;
        }num[p] = strlen(a[p]);
    }
    for (n = 0; n <= p; n++) {
        printf("%lu",num[n]);
        if (n != p) printf(" ");
    }
    printf("\n");
    return 0;
}
