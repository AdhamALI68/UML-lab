//
//  Member.cpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#include "Member.hpp"


Member::Member(int idm, string namee, string addres, string contactt) {
    id = idm;
    name = namee;
    address = addres;
    contact = contactt;
}

int Member::getId() const {
    return id;
}

string Member::getName() const {
    return name;
}

string Member::getAddress() const {
    return address;
}

string Member::getContact() const {
    return contact;
}

void Member::setId(int idm) {
    id = idm;
}

void Member::setName(string namee) {
    name = namee;
}

void Member::setAddress(string addres) {
    address = addres;
}

void Member::setContact(string contactt) {
    contact = contactt;
}
