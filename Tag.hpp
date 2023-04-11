//
//  Tag.hpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#ifndef Tag_hpp
#define Tag_hpp

#include <iostream>
#include "Photo.hpp"
using namespace std;
#include <string>

class Tag {
private:
    int id;
    string name;
    string remarks;
    Photo* photo;

public:
    Tag(int idm, string namee, string remarkss);
    ~Tag();

    int getId() const;
    string getName() const;
    string getRemarks() const;
    void setPhoto(Photo* photoo);
    Photo* getPhoto() const;
};

#endif /* Tag_hpp */
