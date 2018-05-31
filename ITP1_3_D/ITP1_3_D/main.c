//
//  main.c
//  ITP1_3_D
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

int main(int argc, const char * argv[]) {
    int a,b,c,count;
    int i=1;
    scanf("%d %d %d",&a,&b,&c);
    if(1<=a&&a<=10000&&1<=b&&b<=10000&&1<=c&&c<=10000){
        if(a<=b){
            for(i=a;i<=b;i++){
                if(c%i==0){
                    count++;
                }
            }
        }
    }printf("%d\n",count);
    return 0;
}
