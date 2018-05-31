//
//  main.c
//  ITP1_6_D
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m;
    int i,j;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int b[m];
    int out[n];
    for(i=0;i<n;i++){
        out[i]=0;
        for((j=0);j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            out[i]+=a[i][j]*b[j];
        }
    }for(i=0;i<n;i++){
        printf("%d\n",out[i]);
    }
    return 0;
}
