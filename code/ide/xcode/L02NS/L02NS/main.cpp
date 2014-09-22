//
//  main.cpp
//  L02NS
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace chinka;

int main(int argc, const char * argv[])
{
    
    People* p = new People();
    p->sayHello();
    
    return 0;
}

