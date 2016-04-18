//
//  Advantage.cpp
//  ProgrammingAssignment4
//
//  Created by Alexander Flaska on 4/16/16.
//  Copyright © 2016 Alexander Flaska. All rights reserved.
//


#include <iostream>
#include <string>

#include "Advantage.h"

using namespace std;
namespace Gaming
{
    const double Advantage::ADVANTAGE_MULT_FACTOR = 2.0;
    const char Advantage::ADVANTAGE_ID = 'D';
    Advantage::Advantage(const Game &g, const Position &p, double capacity) : Resource(g, p, capacity)
    {
    }
    void Advantage::print(ostream & os) const
    {
        os << ADVANTAGE_ID << __id;
    }
    Advantage::~Advantage()
    {
        
    }
    
    double Advantage::getCapacity() const {
        return __capacity * ADVANTAGE_MULT_FACTOR;
    }
    
    double Advantage::consume() {
        return __capacity * ADVANTAGE_MULT_FACTOR;
    }
}

