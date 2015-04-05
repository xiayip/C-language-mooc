//
//  main.c
//  素数和
//
//  Created by xiayip's mac on 15/3/24.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>
int Prime_NO(int no){
    int PrimeNum=0,i,Num,n = 1,isPrime=0;
        for (Num = 3; n < no; Num++) {            //循环增加待测数，结束条件为n达到no个
            for (i = 2; i < Num ; i++) {
                if (Num % i == 0) {            //判断能否整除
                    isPrime=0;
                    break;
                    }else isPrime=1;
            }
            
            if (isPrime==1) {
            PrimeNum=Num;
            n++;
            }
        }
    return PrimeNum;
}


int main(int argc, const char * argv[]) {
    int n,m,sum = 0;
    int x = 2;
    scanf("%d %d",&n,&m);
    for (x = n; x <= m; x++) {
        sum += Prime_NO(x);
        }
    printf("%d",sum);
    }

