//
//  People.cpp
//  L01OOP
//
//  Created by 陳 華 on 2014/09/22.
//  Copyright (c) 2014年 陳 華. All rights reserved.
//

#include "People.h"

People::People() {
    this->age = 10;
    this->sex = 1;
}

People::People(int age, int sex) {
    
    this->age = age;
    this->sex = sex;
}

int People::getAge() {
    
    return this->age;
}

int People::getSex() {
    
    return this->sex;
}
void People::sayHello() {
    
    printf("Peopel :Hello CPP\n");
}