//
//  main.c
//  多项式加法
//
//  Created by xiayip's mac on 15/3/30.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m,i,p,q,num;
    int a[100][2],b[100][2],c[100][2]={0};
    for (n = 0; n < 100; n++) {
        scanf("%d %d",&p,&num);
        a[p][1]=num;
        if (p == 0) {
            break;
        }
    }
    for (m = 0; m < 100; m++) {
        scanf("%d %d",&q,&num);
        b[q][1]=num;
        if (q == 0) {
            break;
        }
    }
//    for (i=0; i<=n; i++) {
//        printf("%d %d",a[i][0],a[i][1]);
//        printf("\n");
//    }
    for (i = 6; i >= 0; i--) {
        c[i][0] = i;
        c[i][1] = a[i][1]+b[i][1];
        if (c[i][1] != 0) {
            if (c[i][0] != 0 && c[i][0] != 1) {
                printf("%dx%d+",c[i][1],c[i][0]);
            }else if (c[i][0] == 1){
                printf("%dx+",c[i][1]);
            }else printf("%d",c[i][1]);
        }
    }
    printf("\n");
    return 0;
}
