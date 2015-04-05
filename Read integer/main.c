//
//  main.c
//  念整数
//
//  Created by xiayip's mac on 15/3/24.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>

void zhuanhuan(int num){
    int t,n,mask=1;
    t = num;
    while (t>10) {
        t /= 10;
        mask *= 10;
    }
    while (mask > 0) {
        n = num / mask;
        
        switch (n) {
            case 0:
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
            default:
                break;
        }
        
        
        if (mask > 9) {
            printf(" ");
        }
        num = num % mask;
        mask /= 10;
    }
    printf("\n");

}
int main(int argc, const char * argv[]) {
    int num;
    scanf("%d",&num);
    if (num < 0) {
        printf("fu ");
        num *= -1;
        zhuanhuan(num);
    }else zhuanhuan(num);
    return 0;
}
