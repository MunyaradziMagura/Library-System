#pragma once
#include "item.h"
class book :
    public item
{
private:
    string authors;
    string generes;
public:
    book(int _registrationCode, string _title, int _year, string _type, bool _state) : item( _registrationCode, _title, _year, _type, _state) {}
    string getAuthor() {return authors; }
    string getGenre() { return generes; }
    void setAuthor(string _authors) { authors = _authors; }
    void setGenre(string _generes) { generes = _generes; }
};

