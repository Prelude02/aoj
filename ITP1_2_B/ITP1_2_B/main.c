//
//  main.c
//  ITP1_2_B
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(0<=a&&a<=100&&0<=b&&b<=100&&0<=c&&c<=100){
        if(a<b&&b<c){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
