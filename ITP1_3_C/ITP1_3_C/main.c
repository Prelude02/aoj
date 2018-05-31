//
//  main.c
//  ITP1_3_C
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

int main(int argc, const char * argv[]) {
    int y,x;
    int i=1;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==0&&y==0){
            break;
        }
        if(0<=x&&x<=10000&&0<=y&&y<=10000){
            if(i<=3000){
                if(x>y){
                    printf("%d %d\n",y,x);
                    i++;
                }else{
                    printf("%d %d\n",x,y);
                    i++;
                }
            }
            
        }
    }
    return 0;
}
