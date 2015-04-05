//
//  main.c
//  鞍点
//
//  Created by xiayip's mac on 15/3/31.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int n,s,i,j,p,q,k;
    int max,res=0;
    scanf("%d",&n);
    int a[n][n];
    for (s = 0; s < n; s++) {
        scanf("%d %d %d %d",&a[s][0],&a[s][1],&a[s][2],&a[s][3]);
    }
    i=0;j=0;
    for (p = 0; p < n; p++) {
        max=a[p][0];
        for (q = 0; q < n; q++) {       //检查在行中是否是最大
            if (a[p][q] > max) {
                max = a[p][q];
                i = p;j = q;
            }
        }
        for (k = 0; k < n; k++) {     //检查在列中是否是最小
            if (max <= a[k][j]) {
                res = 1;
            }else {
                res = 0;
                break;
            }
        }
        if (res == 1) {
            break;
        }
    }
    if (res == 0) {
        printf("NO");
    }else printf("%d %d",i,j);
    return 0;
}
