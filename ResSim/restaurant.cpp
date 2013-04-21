#include "restaurant.h"

restaurant::restaurant(std::string name, int level, int numTables, int seats, int hours, int type, int avgCookTime, int NumServers, std::vector<int> skillLevel){
    name = name;
    level = level;
    numTables = numTables;
    seats = seats;
    totalTime = hours*60; //total minutes we have
    seats = seats;
    type = type;
    avgCookTime = avgCookTime;
    
    for(int i = 0;i<numTables;i++){ //sets up the dining room with tables
        table t (seats);
        diningRoom.push_back(t);
    }
    
    int d;
    
    if(numTables % NumServers == 0){ //if the tables are equally divisible by the number of servers
        d = numTables / NumServers; //all servers get the same amount of tables
        
        for(int i = 0;i<NumServers;i++){
            server s (skillLevel.at(i), d);
        }
    }
    else{
        d = numTables / NumServers;
        int j = numTables % NumServers; //how many left over tables do we have that can't be evenly divided up
        
        while(j>0){
            server s(skillLevel.at(i), (d+1)); //otherwise the first set get an extra table
            j--;
        }
        
        
        
    }
}