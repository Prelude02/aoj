//
//  main.c
//  ITP1_1_C
//
//  Created by x16043xx on 2018/05/24.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    if(1<=a&&a<=100){
        if(1<=b&&b<=100){
            printf("%d %d\n",a*b,2*a+2*b);
        }
        
    }
    return 0;
}
