#ifndef restaurant_h
#define restaurant_h

#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <string>
#include "random.h"
#include "cook.h"
#include "party.h"
#include "server.h"
#include "table.h"
#include "file.h"
#include "compareParty.h"

class restaurant{
private:
    std::priority_queue<party, std::vector<party>, compareParty> waitingList;
    std::priority_queue<party, std::vector<party>, compareParty> waitingForServer;
    std::priority_queue<party, std::vector<party>, compareParty> takingOrder;
    std::priority_queue<party, std::vector<party>, compareParty> waitingOnFood;
    std::priority_queue<party, std::vector<party>, compareParty> eating;
    int guests; //how many guest total we had
    int parties; //how many parties we had
    int totalWait; //total wait a party waited on a table for
    int cookTime; //total wait a party waited on food for
    int turnAround; //how long it took to take a customer in and get them out
    std::string name;
    int level, totalTime, type, avgCookTime, seats;
    std::vector<table> diningRoom;
    std::vector<server> waitStaff;
protected:

public:
    restaurant(std::string, int, int, int, int, int, int, int, std::vector<int>);
    void startSim();

};

#endif