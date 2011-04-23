//
//  SMFClockController.h
//  SMFramework
//
//  Created by Thomas Cool on 10/31/10.
//  Copyright 2010 tomcool.org. All rights reserved.
//

#import <BackRow/BackRow.h>
#import <UIKit/UIColor.h>

@interface SMFClockController : BRTextControl {
    NSTimer *_timer;
    NSDateFormatter *_formatter;
    NSDictionary *textAttributes;
    NSTimeZone  *timeZone;
    NSLocale    *_currentlocale;
    id     color;
}

-(void)timerRun;
-(NSLocale *)currentlocale;
-(void)setCurrentlocale:(NSLocale *)l;
-(void)setTimeZone:(NSTimeZone*)tz;
-(NSTimeZone *)timeZone;

-(void)setColor:(id)c; 
@property (retain) NSDictionary *textAttributes;
@end
