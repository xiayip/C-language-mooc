//
//  main.c
//  分解质因数
//
//  Created by xiayip's mac on 15/3/24.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>
int sushu(int n){       //判断是否素数
    int isPrime=1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}


void heshu(int n){      //合数输出分解式
    int i = 2;
    while(i < n) {
        if (n % i == 0) {
            printf("%d*",i);
            n = n / i;
            i = 2;
        }else i++;
    }
    printf("%d",n);
}



int main(int argc, const char * argv[]) {
    int num;
    scanf("%d",&num);
    if (sushu(num)) {
        printf("%d",num);
    }else {
        printf("%d=",num);
    heshu(num);
    }
    
    return 0;
}
