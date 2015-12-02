//
//  main.cpp
//  point
//
//  Created by wyq on 15/12/2.
//  Copyright (c) 2015年 wyq. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=100;
    p=&a;
    printf("1 a=%x   $a=%x   &p=%x  p=%x  *p=%x\n",a,&a,&p,*p);
    printf("2 a=%x   $a=%x   &p=%x  p=%x  *p=%x\n",a,&a,&p,*p);
    return 0;
}
