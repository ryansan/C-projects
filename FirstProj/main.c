//
//  main.c
//  FirstProj
//
//  Created by Ryan Sangha on 27/05/2018.
//  Copyright © 2018 Ryan Sangha. All rights reserved.
//

#include <stdio.h>


int foo(int number){
    printf("ur number %d\n", number);
    return number;
}

int maks(int a[]){
    int m = 0;
    for(int i = 0; i < 6; i++){
        if(a[i] >= m){
            m = a[i];
        }
    }
    printf("m: %d\n", m);
    return m;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    foo(5);
    
    int a[] = {1,5,20,30,10,40};
    int *ptr = a;
    maks(ptr);
    return 0;
}

