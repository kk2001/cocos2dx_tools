//
//  MenuWithAuthority.cpp
//  gameTools4Cocos
//
//  Created by 龙灵修 on 13-10-13.
//
//

//
//  MenuWithAuthority.cpp
//  CDialogMenu
//
//  Created by cesc on 13-6-10.
//
//

#include "MenuWithAuthority.h"
MenuWithAuthority* MenuWithAuthority::create(){
    
    return MenuWithAuthority::create(NULL, NULL);
}

/** creates a CCMenu with it's items */
MenuWithAuthority* MenuWithAuthority::create( int _authority, CCMenuItem* item, ...){
    
    va_list args;
    va_start(args,item);
    MenuWithAuthority *pRet = new MenuWithAuthority();
    if (pRet && pRet->initWithItems(item, args))
    {
        pRet->authority = _authority;
        pRet->autorelease();
        va_end(args);
        return pRet;
    }
    va_end(args);
    CC_SAFE_DELETE(pRet);
    return NULL;
    
}

bool MenuWithAuthority::initWithItems(CCMenuItem* item, va_list args)
{
    CCArray* pArray = NULL;
    if( item )
    {
        pArray = CCArray::create(item, NULL);
        CCMenuItem *i = va_arg(args, CCMenuItem*);
        while(i)
        {
            pArray->addObject(i);
            i = va_arg(args, CCMenuItem*);
        }
    }
    
    return initWithArray(pArray);
}

/** creates a CCMenu with a CCArray of CCMenuItem objects */
MenuWithAuthority* MenuWithAuthority::createWithArray(CCArray* pArrayOfItems){
    
    
    MenuWithAuthority *pRet = new MenuWithAuthority();
    if (pRet && pRet->initWithArray(pArrayOfItems))
    {
        pRet->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(pRet);
    }
    
    return pRet;
    
}

void MenuWithAuthority::registerWithTouchDispatcher(){
    //  设定比ccmenu的等级还要低，可以遮挡的
    
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate( this, authority, true );
    
    
}