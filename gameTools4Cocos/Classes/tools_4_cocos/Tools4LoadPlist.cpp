//
//  Tools4LoadPlist.cpp
//  gameTools4Cocos
//
//  Created by 龙灵修 on 13-10-13.
//
//

#include "Tools4LoadPlist.h"

Tools4LoadPlist::Tools4LoadPlist( const char* file_name ){
    
    _dic = CCDictionary::createWithContentsOfFile( file_name );

    CC_SAFE_RETAIN(_dic );
}
Tools4LoadPlist::~Tools4LoadPlist(){
    
    CC_SAFE_RELEASE_NULL( _dic );
    
    
}

std::string Tools4LoadPlist::getStringValueFromPlist(std::string key){
    
    CCAssert( _dic != NULL, "Dictionary is NULL,Check Pointer's address"); // _dic is null
    
    const CCString* _cString = _dic->valueForKey(key);
    
    const char* value = _cString->getCString();
    
    return  std::string( value );
}

int  Tools4LoadPlist::getIntValueFromPlist(std::string key){
    
   CCAssert( _dic != NULL, "Dictionary is NULL,Check Pointer's address"); // _dic is null
    
   const CCString* _cString = _dic->valueForKey(key);
    
    return  _cString->intValue();
    
}


float Tools4LoadPlist::getFloatValueFromPlist(std::string key){
    
  CCAssert( _dic != NULL, "Dictionary is NULL,Check Pointer's address"); // _dic is null
    
  const CCString* _cString = _dic->valueForKey(key);
    
   return  _cString->floatValue();
}