//
//  Tag.cpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#include "Tag.hpp"
#include "Photo.hpp"


Tag::Tag(int idm, string namee, string remarkss) : id(idm), name(namee), remarks(remarkss), photo(nullptr) {}

Tag::~Tag() {}

int Tag::getId() const {
    return id;
}

string Tag::getName() const {
    return name;
}

string Tag::getRemarks() const {
    return remarks;
}

void Tag::setPhoto(Photo* photoo) {
    photo = photoo;
}

Photo* Tag::getPhoto() const {
    return photo;
}

