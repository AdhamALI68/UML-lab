//
//  Member.hpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#ifndef Member_hpp
#define Member_hpp

#include <iostream>
using namespace std;
#include <string>

class Member {
    
private:
    int id;
    string name;
    string address;
    string contact;
public:
    Member(int idm, string namee, string addres, string contactt);

    int getId() const;
    string getName() const;
    string getAddress() const;
    string getContact() const;

    void setId(int idm);
    void setName(string namee);
    void setAddress(string addres);
    void setContact(string contactt);

};

#endif /* Member_hpp */
