//
//  main.c
//  GPS数据处理
//
//  Created by xiayip's mac on 15/4/4.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>
#include "string.h"

int main(int argc, const char * argv[]) {
    char a[16][100]={0};
    char b[100]={0},c[6]="$GPRMC",d[3]="END";
    int count = 0,q = 0,hour,min,sec;
    unsigned long cha = 0;
    char *pos=0;
    do {
        scanf("%s",b);
        if (!strncmp(b,c,6)) {
            strcpy(a[0],b);
        }
    } while (strncmp(b,d,3));

    for (q = 0; q < 16; q ++) {
        if (strchr(a[count], ',')) {
            pos=strchr(a[count], ',');
            cha = strlen(a[count]) - strlen(pos);
            a[count][cha] = '\0';
            count++;
            strcpy(a[count],pos+1);
        }
    }
    hour=(a[1][0]-'0')*10+(a[1][1]-'0');
    if (hour < 17) {
        if ((hour+8) < 10) printf("0%d",hour+8);
        else printf("%d",hour+8);
    }else printf("%d",hour+8-24);
    min=(a[1][2]-'0')*10+(a[1][3]-'0');
    sec=(a[1][4]-'0')*10+(a[1][5]-'0');
    printf(":%d:%d",min,sec);
    return 0;
}



