//
//  main.c
//  ITP1_6_C
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int i,j,a;
    int tn,f,rn,pn;
    int room[4][3][10]={0};
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d %d %d %d",&tn,&f,&rn,&pn);
        if(room[tn-1][f-1][rn-1]+pn<0){
            pn=0;
        }
        room[tn-1][f-1][rn-1]+=pn;
    }for(i=0;i<4;i++){
        if(i!=0){
            printf("\n");
            printf("####################\n");
        }
        for(j=0;j<3;j++){
            if(j!=0){
                printf("\n");
            }
            for(a=0;a<10;a++){
                printf("%2d",room[i][j][a]);
            }
        }
        
    }printf("\n");
    return 0;
}
