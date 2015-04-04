//
//  main.c
//  FuzzBizzNezz
//
//  Created by JIAN WANG on 4/3/15.
//  Copyright (c) 2015 JWANG. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Please input three integers for 'Fuzz', 'Bizz' and 'Nezz': \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Integer for 'Fuzz' is %d\n", a);
    printf("Integer for 'Bizz' is %d\n", b);
    printf("Integer for 'Nezz' is %d\n", c);
    
    for (int i=1; i<=c; i++) {
        if (i%a==0 && i%b==0) {
            printf("FuzzBizz\n");
        } else if (i%a==0) {
            printf("Fuzz\n");
        } else if (i%b==0) {
            printf("Bizz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
