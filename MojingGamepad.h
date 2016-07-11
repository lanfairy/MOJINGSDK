//
//  MojingGamepad.h
//  MojingSDK
//
//  Created by 汤申亮 on 15/10/13.
//  Copyright (c) 2015年 baofeng. All rights reserved.
//

#ifndef MojingSDK_MojingGamepad_h
#define MojingSDK_MojingGamepad_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MojingKeyCode.h"

@class MojingGamepad;

typedef void(^GamepadButtonValueChangedHandler)(NSString* peripheralName, AXIS_GAMEPAD axisID, KEY_GAMEPAD keyID, BOOL bPressed);
typedef void(^GamepadAxisValueChangedHandler)(NSString* peripheralName, AXIS_GAMEPAD axisID, float xValue, float yValue);

@interface MojingGamepad : NSObject

@property (copy) GamepadButtonValueChangedHandler buttonValueChangedHandler;
@property (copy) GamepadAxisValueChangedHandler axisValueChangedHandler;

- (void)registerGamepad:(UIViewController* )viewCon;

- (void)registerGamepad;            //only for Unreal 

/*+++ Only for Mojing4 +++++++++++++++++++*/
- (void)scan;                       //scan bluetooth device
- (void)stopScan;                   //Stop scanning
- (void)disconnect;                 //Disconnect mojing4
- (void)setAutoScan:(BOOL)bAuto;    //set AutoScan or not
/*++++++++++++++++++++++++++++++++++++++++*/

+ (instancetype)sharedGamepad;
@end

#endif
