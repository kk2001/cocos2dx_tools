//
//  MenuWithAuthority.h
//  gameTools4Cocos
//   custorize menu with custormize authority
//  Created by 龙灵修 on 13-10-13.
//
//

#ifndef __gameTools4Cocos__MenuWithAuthority__
#define __gameTools4Cocos__MenuWithAuthority__

#include "cocos2d.h"
USING_NS_CC;

class MenuWithAuthority : public CCMenu {
    
    
public:
   
    
       static MenuWithAuthority* create();
    
    /** creates a CCMenu with it's items */
    static MenuWithAuthority* create(int _authority,CCMenuItem* item, ...);
    
    /** creates a CCMenu with a CCArray of CCMenuItem objects */
    static MenuWithAuthority* createWithArray(CCArray* pArrayOfItems);
    
    virtual void registerWithTouchDispatcher();
    bool initWithItems(CCMenuItem* item, va_list args);
private:
    int authority;
};

#endif /* defined(__gameTools4Cocos__MenuWithAuthority__) */
