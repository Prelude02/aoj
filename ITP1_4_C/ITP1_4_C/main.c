//
//  main.c
//  ITP1_4_C
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    char op;
    while(1){
        scanf("%d %c %d",&a,&op,&b);
        if(op=='?'){
            break;
        }
        if(op=='+'){
            printf("%d\n",a+b);
        }if(op=='-'){
            printf("%d\n",a-b);
        }if(op=='*'){
            printf("%d\n",a*b);
        }if(op=='/'){
            printf("%d\n",a/b);
        }
    }
    return 0;
}
