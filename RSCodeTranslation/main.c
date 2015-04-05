//
//  main.c
//  rs
//
//  Created by xiayip's mac on 15/1/5.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int rs,r,s;
    scanf("%d",&rs);
    if (11<=rs<=59) {
        r=rs/10;
        s=rs%10;
    switch (s) {
        case 1:
            printf("Faint signals, barely perceptible");
            break;
        case 2:
            printf("Very weak signals");
            break;
        case 3:
            printf("Weak signals");
            break;
        case 4:
            printf("Fair signals");
            break;
        case 5:
            printf("Fairly good signals");
            break;
        case 6:
            printf("Good signals");
            break;
        case 7:
            printf("Moderately strong signals");
            break;
        case 8:
            printf("Strong signals");
            break;
        case 9:
            printf("Extremely strong signals");
            break;
    }
    switch (r) {
        case 1:
            printf(",Unreadable");
            break;
        case 2:
            printf(",Barely readable, occasional words distinguishable");
            break;
        case 3:
            printf(",Readable with considerable difficulty");
            break;
        case 4:
            printf(",Readable with practically no difficulty");
            break;
        case 5:
            printf(",Perfectly readable");
            break;
        default:
            break;
    }
    }
    return 0;
}
