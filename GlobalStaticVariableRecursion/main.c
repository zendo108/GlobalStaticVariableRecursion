//
//  main.c
//  GlobalStaticVariableRecursion
//
//  Created by Ivan Aranda on 28-05-20.
//  Copyright © 2020 Ivan Aranda. All rights reserved.
//

#include <stdio.h>

int x=0;

int fun(int n)
    {
//        static int x=0;
        if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
        
    return 0;
}
int main() {
    int r;
    r=fun(5);
    printf("%d\n",r);
    r=fun(5);
    printf("%d\n",r);
    return 0;
}
