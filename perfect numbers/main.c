//
//  main.c
//  完数
//
//  Created by xiayip's mac on 15/3/24.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>
int wanshu(int n){
    int flag=0,sum=0;
    int i = 1;
    while(i < n) {
        if (n % i == 0) {
            sum += i;
            i ++;
        }else i ++;
    }
    if (sum == n) {
        flag = 1;
    }
    return flag;
}

int main(void) {
    int n,m,x,flag=0;
    scanf("%d %d",&n,&m);
    for (x = n; x <= m; x++) {
        if (wanshu(x)) {
            if(flag)printf(" ");
            printf("%d",x);
            flag=wanshu(x);
        }
    }
    printf("\n");
    return 0;
}
