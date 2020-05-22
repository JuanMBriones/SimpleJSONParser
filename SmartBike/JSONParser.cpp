//
//  JSONParser.cpp
//  SmartBike
//
//  Created by Juan Briones on 22/05/20.
//  Copyright © 2020 Juan Briones. All rights reserved.
//

#include "JSONParser.hpp"

#include <iostream>
#include <list>
#include <utility>
#include <fstream>
#include <filesystem>

#define TAB "\t"

using namespace std;


ofstream file;

void parse(list<pair<int, int>> movements) {
    file.open("/Users/JuanBriones/Downloads/xd.json");
    file << "{" << endl;
    file << TAB << "\"movimientos\": [" << endl;
    for(int i=0; i<movements.size(); i++) {
        
        
        file << TAB << "{" << endl;
        //cout << "(" << l.first << ", " << l.second << ")" << endl;
        file << TAB << TAB << "\"x\": " << movements.front().first << "," << endl;
        file << TAB << TAB << "\"y\": " << movements.front().second << endl;
        if(i==movements.size()-1) {
            file << TAB << "}" << endl;
        }
        else {
            file << TAB << "}," << endl;
        }
        
        
        
    }
    
    file << TAB << "]" << endl;
    file << "}" << endl;
    
    file.close();
    
}
