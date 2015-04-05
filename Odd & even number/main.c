//
//  main.c
//  奇偶个数
//
//  Created by xiayip's mac on 15/3/4.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n , ji , ou ;
    scanf("%d",&n);
    while ( n != -1 ) {
        if ( n % 2 == 0 ) {
            ji ++;
        }else ou ++;
        scanf("%d",&n);
    }
    printf("%d %d", ji , ou);
}
