//
//  Task.h
//  EggsSave
//
//  Created by 郭洪军 on 12/24/15.
//  Copyright © 2015 Adwan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

@property(strong, nonatomic)NSString* pId;                  //任务Id
@property(strong, nonatomic)NSString* pTitle;               //产品标题
@property(assign, nonatomic)float pBonus;                   //奖励金额
@property(strong, nonatomic)NSString* pSubTitle;            //子标题
@property(strong, nonatomic)NSString* pStartURL;            //cp任务开始URL
@property(strong, nonatomic)NSString* pEndURL;              //cp任务完成URL
@property(strong, nonatomic)NSString* pNotifyURL;           //平台任务达成回调URL
@property(strong, nonatomic)NSString* pIconUrl;             //icon地址
@property(strong, nonatomic)NSArray* pDetailTaskExplain;   //详细任务说明
@property(strong, nonatomic)NSString* pFastTaskExplain;     //快速任务说明
@property(strong, nonatomic)NSString* pKeyWord;             //关键字
@property(assign, nonatomic)long pState;                    //任务领取的状态 0,领取，未完成 1，完成 2，未领取
@property(strong, nonatomic)NSArray *returnDetailArray; //详细任务说明

@end


static inline Task* TaskMake(NSString*tid, NSString* title, NSString* subTitle, NSString* startURL, NSString* endURL, NSString* notifyURL, NSString* iconURL, NSArray* detailTaskExplain, NSString* fastTaskExplain, NSString* keyWord, long state, float bonus, NSArray *returnDetailArray)
{
    Task* task = [[Task alloc] init];
    task.pId = tid;
    task.pTitle = title;
    task.pSubTitle = subTitle;
    task.pStartURL = startURL;
    task.pEndURL = endURL;
    task.pNotifyURL = notifyURL;
    task.pIconUrl = iconURL;
    task.pDetailTaskExplain = detailTaskExplain;
    task.pFastTaskExplain = fastTaskExplain;
    task.pKeyWord = keyWord;
    task.pState = state;
    task.pBonus = bonus;
    task.returnDetailArray = returnDetailArray;
    return task;
}

