//
//  Man.h
//  L03Classes
//
//  Created by 陳 華 on 2014/09/23.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#ifndef __L03Classes__Man__
#define __L03Classes__Man__

#include <iostream>
#include "People.h"

class Man:public People {
    
public:
    Man(int age);
    virtual void sayHello();
    virtual void eat();
};

#endif /* defined(__L03Classes__Man__) */
