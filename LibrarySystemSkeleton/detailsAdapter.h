#pragma once
#include "isbnDetailsLoader.h"
#include "imdbDetailsLoader.h"
#include "boardGameGreekDetailsLoader.h"
class detailsAdapter :
    public isbnDetailsLoader
{
private:
    imdbDetailsLoader imdbDetailsLoader;
    boardGameGreekDetailsLoader boardGameGreekDetailsLoader;

public:
    string loadItemDetails(string isbn) {};

    detailsAdapter(imdbDetailsLoader _imdbDetailsLoader, boardGameGreekDetailsLoader _boardGameGreekDetailsLoader) {
        imdbDetailsLoader = _imdbDetailsLoader;
        boardGameGreekDetailsLoader = _boardGameGreekDetailsLoader;
    }
    
};

