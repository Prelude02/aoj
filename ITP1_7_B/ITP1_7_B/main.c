//
//  main.c
//  ITP1_7_B
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,x;
    int i,j,k,count;
    while(1){
        count=0;
        scanf("%d %d",&n,&x);
        if(n==0&&x==0){
            break;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    if(i!=k&&i!=j&&k!=j){
                        if(i+k+j==x){
                            count++;
                        }
                    }
                }
            }
        }printf("%d\n",count/6);
    }
    
    return 0;
}
