#include "menu.h"

menu::menu(){
    restaurant * r;
}

restaurant * menu::startMenu(){

    start:
    try{
        std::cout << "Please pick how you want to interact:" << std::endl;
        std::cout << "1. Interactive Menu" << std::endl;
        std::cout << "2. Upload data from file" << std::endl;

        std::cin >> choice;
        
        if(isdigit(choice)){
            throw "Invalid input!\n";
        }
        
        switch(choice){
            case 1:
                interactiveMenu();
                break;
            case 2:
                fileMenu();
                break;
            default:
                throw "Invaid input!\n";
                break;
        }
        
    }
    catch(char *exception){
        std::cout << *exception << std::endl;
        goto start;
    }
    
    return r;
}

void menu::interactiveMenu(){
    std::string name;
    int level;
    int numTables;
    int seats;
	int hours;
    int type;
    int avgCookTime;
    int numServers;
    std::vector<int> skillLevel;
    
    std::cout << "Picked Interactive Menu" << std::endl;
    
    try{
        std::cout << "What is the name of the restaurant?" << std::endl;
        std::cin.ignore();
        getline(std::cin, name);
        std::cout << "How busy are you on a level of 1-4 where 1 is slow and 4 is at full capacity" << std::endl;
        std::cin >> level;
        std::cout << "How many tables are in your restaurant?" << std::endl;
        std::cin >> numTables;
        std::cout << "How many guests can sit at each table?" << std::endl;
        std::cin >> seats;
		std::cout << "How many hours would you like this simulation to run for?" << std::endl;
		std::cin >> hours;
        std::cout << "What type of restaurant are you?" << std::endl;
        std::cout << "1. Casual" << std::endl;
        std::cout << "2. Bistro" << std::endl;
        std::cout << "3. Gourmet" << std::endl;
        std::cout << "4. Fine Dining" << std::endl;
        std::cin >> type;
        std::cout << "What is your ideal cook time, in minutes" << std::endl;
        std::cin >> avgCookTime;
        std::cout << "How many servers do you have?" << std::endl;
        std::cin >> numServers;
        
        for(int i =0;i < numServers;i++){
            int j;
            std::cout << "What is server " << i << " skill level, between 1-5 where 1 is your best servers ard 5 are new servers?" << std::endl;
            std::cin >> j;
            skillLevel.push_back(j);
        }
        
    }
    catch(char *exception){
        std::cout << *exception << std::endl;
    }
    
    
}

void menu::fileMenu(){
    std::ifstream input;
    std::string filename;
    std::string name;
    int level;
    int numTables;
    int seats;
	int hours;
    int type;
    int avgCookTime;
    int numServers;
    std::vector<int> skillLevel;
    
    std::cout << "Picked File Menu" << std::endl;
    
file:
    try{
        std::cout << "Please input the full path the file you wish to use for this simulation" << std::endl;
        std::cin >> filename;
        input.open(filename.c_str());
        
        if(!input){
            throw "Unable to open input file\n";
        }
        
        getline(input, name);
        input >> level >> numTables >> seats >> hours >> type >> avgCookTime >> numServers;
        
        for(int i =0;i<numServers;i++){
            int j;
            input >> j;
            skillLevel.push_back(j);
        }
        
        std::cout << name << std::endl;
        std::cout << level << std::endl;
        std::cout << numTables << std::endl;
        std::cout << seats << std::endl;
		std::cout << hours << std::endl;
        std::cout << type << std::endl;
        std::cout << avgCookTime << std::endl;
        std::cout << numServers << std::endl;
        for(int i = 0;i< numServers;i++){
            std::cout << skillLevel.at(i) << std::endl;
        }
        
        
    }
    catch(char *exception){
        std::cout << *exception << std::endl;
        goto file;
    }
}