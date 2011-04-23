//
//  SMFTextDropShadowControl.h
//  SMFramework
//
//  Created by Thomas Cool on 2/27/11.
//  Copyright 2011 Thomas Cool. All rights reserved.
//

#import <BackRow/BackRow.h>


@interface SMFTextDropShadowControl : BRDropShadowControl {
    NSMutableString *_text;
    NSMutableAttributedString *_att;
    BRScrollingTextBoxControl *_scrolling;
    BRListControl *_list;
}
@property (readwrite,retain)NSMutableString *text;
@property (readonly,assign)NSMutableAttributedString *attributedString;
-(void)appendToText:(NSString *)t;
@end
