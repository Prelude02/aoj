//
//  main.c
//  ITP1_2-A
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    if(-1000<=a&&a<=1000&&-1000<=b&&b<=1000){
        if(a<b){
            printf("a < b\n");
        }if(a==b){
            printf("a == b\n");
        }if(a>b){
            printf("a > b\n");
        }
    }
    
    
    return 0;
}
