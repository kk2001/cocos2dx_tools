//
//  Logger.h
//  gameTools4Cocos
//
//  Created by 龙灵修 on 13-10-21.
//
//

#ifndef __gameTools4Cocos__Logger__
#define __gameTools4Cocos__Logger__


class Logger {
    
    
public:
   
    static bool bOpenLogger;
    
    static void output( const char * pszFormat, ...);
};
#endif /* defined(__gameTools4Cocos__Logger__) */

