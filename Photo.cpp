//
//  Photo.cpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#include "Photo.hpp"
#include "Album.hpp"
#include "Location.hpp"
#include "Member.hpp"
#include "Tag.hpp"
#include <vector>

Photo::Photo(int id, string title, string remarks, string type, bool privacy) : id(id), title(title), remarks(remarks), type(type), privacy(privacy), album(nullptr), location(nullptr), member(nullptr) {}

Photo::~Photo() {}

int Photo::getId() const {
    return id;
}

string Photo::getTitle() const {
    return title;
}

string Photo::getRemarks() const {
    return remarks;
}

string Photo::getType() const {
    return type;
}

bool Photo::getPrivacy() const {
    return privacy;
}

void Photo::setAlbum(Album* albumm) {
    album = albumm;
}

Album* Photo::getAlbum() const {
    return album;
}

void Photo::setLocation(Location* locationn) {
    location = locationn;
}

Location* Photo::getLocation() const {
    return location;
}

void Photo::setMember(Member* memberr) {
    member = memberr;
}

Member* Photo::getMember() const {
    return member;
}

void Photo::addTag(Tag* tag) {
    tag->setPhoto(this);
}

void Photo::addTag(Tag tag) {
    tags.push_back(tag);
}
