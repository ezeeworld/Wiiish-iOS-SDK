//
//  WiiishManager.h
//  WiiishInApp
//
//  Created by Stéphanie Spenlé on 21/06/2017.
//  Copyright © 2017 Areas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol WiiishInAppDelegate;

@interface WiiishManager : NSObject

@property (nonatomic, weak) id<WiiishInAppDelegate> delegate;

+ (WiiishManager*)sharedManager;
+ (void)prime;
+ (void)displayWiiish;
+ (void)displayWiiishWithOrderId:(NSString*)orderId;
+ (void)closeWiiish;
+ (void)updateTheme:(NSString*)newTheme;
+ (BOOL)handleUrl:(NSURL*)url;
+ (void)setTitlebarColor:(UIColor*)newColor;
    
@end




@protocol WiiishInAppDelegate <NSObject>

@optional
- (void)wiiishViewDidOpen;
- (void)wiiishViewDidClose;

@end
