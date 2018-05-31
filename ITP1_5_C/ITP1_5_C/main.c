//
//  main.c
//  ITP1_5_C
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int H,W;
    int i,j;
    while(1){
        scanf("%d %d",&H,&W);
        if(H==0&&W==0){
            break;
        }
        for(i=1;i<=H;i++){
            if(i!=1){
                printf("\n");
            }for(j=1;j<=W;j++){
                if(i%2!=0&&j%2!=0){
                    printf("#");
                }else if(i%2==0&&j%2==0){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
        }printf("\n");
        printf("\n");
    }
    
    return 0;
}
