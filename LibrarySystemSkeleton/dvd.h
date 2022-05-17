#pragma once
#include "item.h"
class dvd :
    public item
{
private:
    vector<string> directors;
    vector<string> actors;
    vector<string> generes;
public:
    dvd(int _registrationCode, string _title, int _year, string _type, bool _state, vector<string> _directors, vector<string> _actors, vector<string> _generes) : item(_registrationCode, _title, _year, _type, _state) {
        directors = _directors;
        actors = _actors;
        generes = _generes;
    }
    vector<string> getAuthor() { return actors; };
    vector<string> getGenre() {return generes;};
    vector<string> getDirectors() {return directors;};

    void setAuthor(vector<string> _directors) { directors = _directors; };
    void setGenre(vector<string> _actors) { actors = _actors; };
    void setDirectors(vector<string> _generes) { generes = _generes; };
};

