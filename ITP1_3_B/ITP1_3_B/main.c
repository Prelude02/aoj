//
//  main.c
//  ITP1_3_B
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

int main(int argc, const char * argv[]) {
    int i=1,x;
    while(1){
        scanf("%d",&x);
        if(1<=x&&x<=10000){
            if(i<=10000){
                printf("Case %d: %d\n",i,x);
                i++;
            }
        }if(x==0){
            break;
        }
    }
    return 0;
}
