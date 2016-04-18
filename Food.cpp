//
//  Food.cpp
//  ProgrammingAssignment4
//
//  Created by Alexander Flaska on 4/16/16.
//  Copyright © 2016 Alexander Flaska. All rights reserved.
//

#include <iomanip>
#include "Gaming.h"
#include "Food.h"

namespace Gaming {
    
    const char Food::FOOD_ID = 'F';
    
    Food::Food(const Game &g, const Position &p, double capacity) : Resource(g, p, capacity)
    {
    }
    
    Food::~Food()
    {
    }
    
    void Food::print(std::ostream &os) const
    {
        os << this->FOOD_ID<<std::left<<std::setw(4)<<this->__id;
        os<<std::setw(0);
    }
}
