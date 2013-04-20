//
//  compareParty.h
//  ResSim
//
//  Created by Shade Alabsa on 4/20/13.
//  Copyright (c) 2013 Shade Alabsa. All rights reserved.
//

#ifndef ResSim_compareParty_h
#define ResSim_compareParty_h
#include "party.h"

class compareParty{
public:
    bool operator()(party& p1, party& p2){
        if(p1.getwaitTime() < p2.getwaitTime()){
            return true;
        }
        else{
            return false;
        }
    }
    
};

#endif
