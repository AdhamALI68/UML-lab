//
//  Photo.hpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#ifndef Photo_hpp
#define Photo_hpp

#include <iostream>
#include <string>
using namespace std;

class Album;
class Location;
class Member;
class Tag;

class Photo {
private:
    string title;
    string remarks;
    string type;
    bool privacy;
    Album* album;
    Location* location;
    Member* member;
    int id;

public:
    Photo(int id, string title, string remarks, string type, bool privacy);
    ~Photo();

    int getId() const;
    string getTitle() const;
    string getRemarks() const;
    string getType() const;
    bool getPrivacy() const;
    void setAlbum(Album* albumm);
    Album* getAlbum() const;
    void setLocation(Location* locationn);
    Location* getLocation() const;
    void setMember(Member* memberr);
    Member* getMember() const;
    void addTag(Tag* tag);
    void addTag(Tag tag);
};


#endif /* Photo_hpp */
