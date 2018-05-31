//
//  main.c
//  ITP1_4_D
//
//  Created by x16043xx on 2018/05/31.
//  Copyright © 2018年 x16043xx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,tmp;
    int i;
    int min=1000000,max=-1000000;
    int long add=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&tmp);
        if(tmp<min){
            min=tmp;
        }if(max<tmp){
            max=tmp;
        }add=add+tmp;
        
    }
    printf("%d %d %ld\n",min,max,add);
    return 0;
}
