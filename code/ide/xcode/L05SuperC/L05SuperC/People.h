//
//  People.h
//  L01OOP
//
//  Created by 陳 華 on 2014/09/22.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#ifndef __L01OOP__People__
#define __L01OOP__People__

#include <iostream>

class People {
    
private:
    int age;
    int sex;
    
public:
    People();
    People(int age, int sex);
    int getAge();
    int getSex();
    void sayHello();
};

#endif /* defined(__L01OOP__People__) */