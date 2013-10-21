//
//  Logger.h
//  gameTools4Cocos
//
//  Created by cesc on 13-10-21.
//
//

#ifndef __gameTools4Cocos__Logger__
#define __gameTools4Cocos__Logger__

#include "cocos2d.h"
USING_NS_CC;

class Logger {
    
    
public:
    
    static void info(const char * pszFormat, ... );
    
    static bool isOpenLogger;

};


#endif /* defined(__gameTools4Cocos__Logger__) */
