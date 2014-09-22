//
//  main.cpp
//  L06Super
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{

    Man* m = new Man(21);
    m->People::sayHello();
    return 0;
}

