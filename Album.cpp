//
//  Album.cpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#include "Album.hpp"


// Constructors
Album::Album() : m_id(0), m_title(""), m_remarks("") {}
Album::Album(int id, string title, string remarks) : m_id(id), m_title(title), m_remarks(remarks) {}

// Getters
int Album::getId() const {
    return m_id;
}

string Album::getTitle() const {
    return m_title;
}

string Album::getRemarks() const {
    return m_remarks;
}

// Setters
void Album::setId(int id) {
    m_id = id;
}

void Album::setTitle(string title) {
    m_title = title;
}

void Album::setRemarks(string remarks) {
    m_remarks = remarks;
}
