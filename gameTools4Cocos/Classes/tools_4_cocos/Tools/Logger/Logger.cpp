//
//  Logger.cpp
//  gameTools4Cocos
//
//  Created by cesc on 13-10-21.
//
//

#include "Logger.h"

bool Logger::isOpenLogger = true;
void Logger::info( const char * pszFormat, ... ){
    
    if( !isOpenLogger )return;
    
    printf("Logger: ");
    
    char szBuf[kMaxLogLen+1] = {0};
    
    va_list ap;
    va_start(ap, pszFormat);
    vsnprintf(szBuf, kMaxLogLen, pszFormat, ap);
    
    va_end(ap);
    printf("%s", szBuf);
    printf("\n");
    
}

