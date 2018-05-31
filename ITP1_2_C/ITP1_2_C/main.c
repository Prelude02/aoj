//
//  main.c
//  ITP1_2_C
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

int main(int argc, const char * argv[]) {
    int a,b,c,tmp;
    scanf("%d %d %d",&a,&b,&c);
    if(1<=a&&a<=10000&&1<=b&&b<=10000&&1<=c&&c<=10000){
        if(a<b){
            tmp=a;
            a=b;
            b=tmp;
        }if(a<c){
            tmp=a;
            a=c;
            c=tmp;
        }if(b<c){
            tmp=b;
            b=c;
            c=tmp;
        }
        printf("%d %d %d\n",c,b,a);
    }
    
    return 0;
}
