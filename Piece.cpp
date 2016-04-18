//
//  Piece.cpp
//  ProgrammingAssignment4
//
//  Created by Alexander Flaska on 4/16/16.
//  Copyright © 2016 Alexander Flaska. All rights reserved.
//



#include "Gaming.h"
#include "Game.h"
#include "Piece.h"


namespace Gaming
{
    unsigned int Piece::__idGen = 1000;
    
    Piece::Piece(const Game &g, const Position &p) : __game(g)
    {
        __finished = false;
        __turned = false;
        __position = p;
        __id = __idGen++;
    }
    
    Piece::~Piece()
    {
    }
    
    std::ostream &operator<<(std::ostream &os, const Piece &piece)
    {
        piece.print(os);
        return os;
    }
}