//
//  Location.hpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#ifndef Location_hpp
#define Location_hpp

#include <iostream>
#include <string>
using namespace std;

class Location {
private:
    int id;
    string name;
    string remarks;

public:
    Location(int id, string name, string remarks);

    int getId() const;
    string getName() const;
    string getRemarks() const;
};



#endif /* Location_hpp */
