//
//  Album.hpp
//  lab 8(UML)
//
//  Created by Adham Ali on 11/04/2023.
//

#ifndef Album_hpp
#define Album_hpp

#include <iostream>
using namespace std;
#include <string>

class Album {
    
private:
    int m_id;
    string m_title;
    string m_remarks;
public:
    // Constructors
    Album();
    Album(int id, string title, string remarks);

    // Getters
    int getId() const;
    string getTitle() const;
    string getRemarks() const;

    // Setters
    void setId(int id);
    void setTitle(string title);
    void setRemarks(string remarks);

};


#endif /* Album_hpp */
