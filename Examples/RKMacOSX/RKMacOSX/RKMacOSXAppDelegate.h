//
//  RKMacOSXAppDelegate.h
//  RKMacOSX
//
//  Created by Blake Watters on 4/10/11.
//  Copyright 2011 RestKit. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <RestKit/RestKit.h>

@interface RKMacOSXAppDelegate : NSObject <NSApplicationDelegate, RKRequestDelegate>

@property (nonatomic, retain) RKClient *client;
@property (assign) IBOutlet NSWindow *window;

@end
