//
//  main.cpp
//  L07Functions
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    
    People* p = new Man(20);
    p->sayHello();
    p->eat();

    return 0;
}

