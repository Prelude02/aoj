//
//  main.c
//  ITP1_1_D
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t,h,m,s;
    scanf("%d",&t);
    h=t/3600;
    m=(t-3600*h)/60;
    s=t-3600*h-60*m;
    if(0<=t&&t<86400){
        printf("%d:%d:%d\n",h,m,s);
    }
    
    
    
    return 0;
}
