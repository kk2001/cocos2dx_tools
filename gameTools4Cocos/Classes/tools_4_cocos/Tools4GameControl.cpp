//
//  Tools4GameControl.cpp
//  gameTools4Cocos
//
//  Created by 龙灵修 on 13-10-13.
//
//

#include "Tools4GameControl.h"

static Tools4GameControl* _instance = NULL;

Tools4GameControl::Tools4GameControl(){}
Tools4GameControl::~Tools4GameControl(){}

/**
 create a singleton instance
 **/
Tools4GameControl* Tools4GameControl::sharedTools4GameControl(){
    
    if ( !_instance ) {
        _instance = new Tools4GameControl;
    }
    
    return _instance;
    
}
/**
    purge mermoy
 **/
void Tools4GameControl::purge(){
    
    if ( _instance) {
        delete _instance;
        _instance = 0;
    }
    
}

/**
 
  resume / pause game by OperateFlag's value
 ps: if you want to add othe CCNode into gamescene or remove other CCNode from gamescene ,then you should call this function first before your methods

 **/
void Tools4GameControl::operateAllSchedulerAndActions(cocos2d::CCNode* node, OperateFlag flag)
{
    if(node->isRunning()){
        switch (flag) {
            case k_Operate_Pause:
                node->pauseSchedulerAndActions();
                break;
            case k_Operate_Resume:
                node->resumeSchedulerAndActions();
                break;
            default:
                break;
        }
        CCArray* array = node->getChildren();
        if(array != NULL && array->count()>0){
            CCObject* iterator;
            CCARRAY_FOREACH(array, iterator){
                CCNode* child = (CCNode*)iterator;
                this->operateAllSchedulerAndActions(child, flag);
            }
        }
    }
}