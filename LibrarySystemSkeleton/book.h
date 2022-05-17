#pragma once
#include "item.h"
class book :
    public item
{
private:
    vector<string> authors;
    vector<string> generes;
public:
    book(int _registrationCode, string _title, int _year, string _type, bool _state, vector<string> _authors, vector<string> _generes) : item( _registrationCode, _title, _year, _type, _state) {
        authors = _authors;
        generes = _generes;
    }
    vector<string> getAuthor() {return authors; }
    vector<string> getGenre() { return generes; }
    void setAuthor(vector<string> _authors) { authors = _authors; }
    void setGenre(vector<string> _generes) { generes = _generes; }
};

