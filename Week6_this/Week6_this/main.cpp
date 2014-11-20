//
//  main.cpp
//  Week6_this
//
//  Created by Phoenix Perry on 20/11/14.
//  Copyright (c) 2014 Phoenix Perry. All rights reserved.
//

#include <iostream>
using namespace std;
class Pet{
public:
    Pet(){}
    int age =0;
    void growOlder(){
        this->age +=1;
    }
};

int main(int argc, const char * argv[]) {
    Pet tiny;
    cout << tiny.age << " is Tiny's age when the app starts" << endl;
    tiny.growOlder();
    cout << tiny.age << " is Tiny's age after calling the member function growOlder" << endl;
    return 0;

}

