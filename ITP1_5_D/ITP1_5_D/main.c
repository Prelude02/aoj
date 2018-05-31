//
//  main.c
//  ITP1_5_D
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0){
            printf(" %d",i);
        }else if(i%10==3){
            printf(" %d",i);
        }else if((i/10)%10==3){
            printf(" %d",i);
        }else if((i/100)%10==3){
            printf(" %d",i);
        }else if ((i/1000)%10==3){
            printf(" %d",i);
        }if(i==n){
            printf("\n");
        }
    }
    return 0;
}
