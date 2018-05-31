//
//  main.c
//  ITP1_6_A
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#define NUM 100
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i;
    int box[NUM];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&box[i]);
    }for(i=n-1;i>=0;i--){
        printf("%d",box[i]);
        if(i!=0){
            printf(" ");
        }
    }printf("\n");
    
    
    
    return 0;
}
