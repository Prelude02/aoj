//
//  main.c
//  ITP1_5_A
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
        for(i=0;i<H;i++){
            if(i!=0){
                printf("\n");
            }
            for(j=0;j<W;j++){
                printf("#");
            }
        }printf("\n");
        printf("\n");
    }
    
    return 0;
}
