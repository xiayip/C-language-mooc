//
//  main.c
//  time
//
//  Created by xiayip's mac on 15/1/5.
//  Copyright (c) 2015年 xiayip's mac. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int BJT,xiaoshi,fenzhong,shijian;
    scanf("%d",&BJT);
    if(BJT<2400){
        if (BJT/100<8) {
            xiaoshi=16+BJT/100;
            fenzhong=BJT%100;
            shijian=xiaoshi*100+fenzhong;
            printf("%d",shijian);
        }
        else printf("%d",BJT-800);
    }
    return 0;
}
