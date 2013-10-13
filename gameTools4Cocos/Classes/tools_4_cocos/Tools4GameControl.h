//
//  Tools4GameControl.h
//  gameTools4Cocos
//
//  Created by 龙灵修 on 13-10-13.
//
//

#ifndef __gameTools4Cocos__Tools4GameControl__
#define __gameTools4Cocos__Tools4GameControl__
#include "cocos2d.h"
USING_NS_CC;

typedef enum{
    k_Operate_Pause = 0,
    k_Operate_Resume
}OperateFlag;

class Tools4GameControl {
    
    
public:
    
    Tools4GameControl();
   ~Tools4GameControl();
    
    static Tools4GameControl* sharedTools4GameControl();
    
    void operateAllSchedulerAndActions(cocos2d::CCNode* node, OperateFlag flag);
    
    void purge();
};


#endif /* defined(__gameTools4Cocos__Tools4GameControl__) */
