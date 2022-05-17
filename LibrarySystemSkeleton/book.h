#pragma once
#include "item.h"
class book :
    public item
{
private:
    vector<string> authors;
    vector<string> generes;
public:
    book(int _registrationCode, string _title, int _year, string _type, bool _state) : item( _registrationCode, _title, _year, _type, _state) {}
    vector<string> getAuthor() {return authors; }
    vector<string> getGenre() { return generes; }
    void setAuthor(string _authors) { authors = _authors; }
    void setGenre(string _generes) { generes = _generes; }
};

