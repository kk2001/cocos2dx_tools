//
//  Tools4LoadPlist.h
//  gameTools4Cocos
//
//  Created by 龙灵修 on 13-10-13.
//   Load datas from Static Plist into Game
//   remeber delete this before you don't use it
//

#ifndef __gameTools4Cocos__Tools4LoadPlist__
#define __gameTools4Cocos__Tools4LoadPlist__

#include "cocos2d.h"
USING_NS_CC;

#include <string>
using namespace std;
class Tools4LoadPlist {
    
    
public:
    Tools4LoadPlist( const char* fileName );
   ~Tools4LoadPlist();
    
    
    std::string getStringValueFromPlist( std::string key );
    
    int getIntValueFromPlist( std::string key );
    
    float getFloatValueFromPlist( std::string key );
    
    
private:
    
    CCDictionary* _dic;
};
#endif /* defined(__gameTools4Cocos__Tools4LoadPlist__) */
