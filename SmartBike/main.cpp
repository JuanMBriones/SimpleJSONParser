//
//  main.cpp
//  SmartBike
//
//  Created by Juan Briones on 22/05/20.
//  Copyright © 2020 Juan Briones. All rights reserved.
//

#include <iostream>
#include <list>
#include <utility>

#include "JSONParser.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    list<pair<int,int>> myList;
    
    pair<int, int> p;
    p.first = 2;
    p.second = 3;
    
    myList.push_back(p);
    
    p.first = 6;
    p.second = 8;
    
    myList.push_back(p);
    
    p.first = 0;
    p.second = 9;
    
    myList.push_back(p);
    
    
    
    parse(myList);
    
    
    return 0;
}
