//
//  main.c
//  ITP1_4_A
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,d,r;
    double a1,b1,f;
    scanf("%d %d",&a,&b);
    d=a/b;
    r=a%b;
    a1=a;
    b1=b;
    f=a1/b1;
    printf("%d %d %.8lf\n",d,r,f);
    
    return 0;
}
