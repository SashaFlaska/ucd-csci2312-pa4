//
//  Agent.cpp
//  ProgrammingAssignment4
//
//  Created by Alexander Flaska on 4/16/16.
//  Copyright © 2016 Alexander Flaska. All rights reserved.
//

#include <iostream>
#include <string>

#include "Piece.h"
#include "Agent.h"
#include "Resource.h"
#include "Food.h"
#include "Strategic.h"
#include "Simple.h"
#include "Strategic.h"
using namespace std;
namespace Gaming
{
    const double Agent:: AGENT_FATIGUE_RATE = 0.3;
    Agent::Agent(const Game &g, const Position &p, double energy) : Piece(g, p)
    {
        __energy = energy;
    }
    Agent::~Agent()
    {
        
    }
    Piece &Agent::operator*(Piece &other) {
        other.interact(this);
        return *this;
    }
    Piece &Agent::interact(Agent *agent) {
        if(this->__energy < agent->__energy)
        {
            this->finish();
            return *agent;
        }
        if(this->__energy > agent->__energy)
        {
            agent->finish();
            return *this;
        }
        this->finish();
        agent->finish();
        return *this;
    }
    Piece &Agent::interact(Resource *resource) {
        this->addEnergy(resource->getCapacity());
        return *this;
    }
    void Agent::age()
    {
        __energy-=AGENT_FATIGUE_RATE;
    }
    
    
    
    
}