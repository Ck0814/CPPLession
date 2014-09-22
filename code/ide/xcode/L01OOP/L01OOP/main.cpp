//
//  main.cpp
//  L01OOP
//
//  Created by 陳 華 on 2014/09/22.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include <iostream>
#include "People.h"


int main(int argc, const char * argv[])
{

    People* p = new People();
    p->sayHello();
    
    delete p;
    
    return 0;
}

