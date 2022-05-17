#pragma once
#include "item.h"
class boardgame :
    public item
{
private:
    vector<string> designers;
    vector<string> generes;
    int recommendedNoPlayers;
public:
    boardgame(int _registrationCode, string _title, int _year, string _type, bool _state, vector<string> _designers, vector<string> _generes, int _recommendedNoPlayers) : item(_registrationCode, _title, _year, _type, _state) {
        designers = _designers;
        generes = _generes;
        recommendedNoPlayers = _recommendedNoPlayers;
    }
    void setDesigners(vector<string> _designers) { designers = _designers;;}
    void setGenres(vector<string> _generes){ ; generes = _generes; }
    void setRecommendedNoPlayers(int _recommendedNoPlayers) { recommendedNoPlayers = _recommendedNoPlayers;; }
    vector<string> getDesigners() { return designers; }
    vector<string> getGenres() { return generes; }
    int getRecommendedNoPlayers() { return recommendedNoPlayers; }
};

