//
//  Location.cpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#include "Location.hpp"
#include <string>

Location::Location(int id, string name, string remarks)
    : id(id), name(name), remarks(remarks)
{
}

int Location::getId() const
{
    return id;
}

string Location::getName() const
{
    return name;
}

string Location::getRemarks() const
{
    return remarks;
}
