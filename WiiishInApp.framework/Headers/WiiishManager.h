//
//  WiiishManager.h
//  WiiishInApp
//
//  Created by Stéphanie Spenlé on 21/06/2017.
//  Copyright © 2017 Areas. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WiiishInAppDelegate;

@interface WiiishManager : NSObject

@property (nonatomic, weak) id<WiiishInAppDelegate> delegate;

+ (WiiishManager*)sharedManager;
+ (void)prime;
+ (void)displayWiiish;
+ (void)closeWiiish;
+ (void)updateTheme:(NSString*)newTheme;
@end




@protocol WiiishInAppDelegate <NSObject>

@optional
- (void)wiiishViewDidOpen;
- (void)wiiishViewDidClose;

@end
