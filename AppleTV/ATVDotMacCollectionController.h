/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import <BRMediaMenuController.h> // Unknown library

@class BRController, ATVInternetPhotosAccount, NSString, ATVDotMacCollection;

__attribute__((visibility("hidden")))
@interface ATVDotMacCollectionController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	ATVInternetPhotosAccount *_account;	// 132 = 0x84
	ATVDotMacCollection *_collectionToAuth;	// 136 = 0x88
	ATVDotMacCollection *_videoCollectionToLoad;	// 140 = 0x8c
	int _state;	// 144 = 0x90
	NSString *_userName;	// 148 = 0x94
	BOOL _isScreenSaverMenu;	// 152 = 0x98
	BRController *_spinnerController;	// 156 = 0x9c
}
+ (id)menuControllerForAccount:(id)account;	// 0x338afa29
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x338af9e9
- (id)initWithAccount:(id)account;	// 0x338af9d1
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x338b0321
- (void)_authFinished:(id)finished;	// 0x338afc85
- (void)_authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x338af4e1
- (void)_handleCollectionSelection:(id)selection;	// 0x338af791
- (void)_handleRemoveSelection:(id)selection;	// 0x338b06fd
- (void)_providerUpdated:(id)updated;	// 0x338afb21
- (void)_pushWaitSpinnerController;	// 0x338b0841
- (void)_setScreenSaverForCollection:(id)collection;	// 0x338af57d
- (void)_showInvalidUserNamePrompt;	// 0x338b0019
- (void)_showPasswordPrompt;	// 0x338afe95
- (void)_showUserNamePrompt;	// 0x338b019d
- (void)_startPlaybackForCollection:(id)collection;	// 0x338af5d9
- (void)dealloc;	// 0x338afa69
- (long)defaultIndex;	// 0x338af99d
- (BOOL)isNetworkDependent;	// 0x338af4dd
- (void)textDidChange:(id)text;	// 0x338af4d9
- (void)textDidEndEditing:(id)text;	// 0x338af8c5
@end

