/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library

@class NSTimer, BRAccount, NSString, ATVMusicStoreAccountSelector, NSDictionary, BRWaitPromptControl;

@interface ATVMusicStoreTransactionDialog : BRControl {
@private
	int _txState;	// 40 = 0x28
	BRWaitPromptControl *_waitPrompt;	// 44 = 0x2c
	BRAccount *_account;	// 48 = 0x30
	NSDictionary *_item;	// 52 = 0x34
	ATVMusicStoreAccountSelector *_accountSelector;	// 56 = 0x38
	NSString *_id;	// 60 = 0x3c
	NSTimer *_timer;	// 64 = 0x40
}
- (id)initWithAccountSelector:(id)accountSelector;	// 0x338e4839
- (id)initWithItem:(id)item;	// 0x338e4851
- (id)initWithItem:(id)item andAccountSelector:(id)selector;	// 0x338e55c5
- (id)_accountSelector;	// 0x338e4569
- (void)_acquireItem:(id)item;	// 0x338e4d85
- (void)_acquisitionCancelled:(id)cancelled;	// 0x338e4b55
- (void)_acquisitionFailed:(id)failed;	// 0x338e4aad
- (void)_acquisitionSucceeded:(id)succeeded;	// 0x338e4bfd
- (void)_authenticateAccount:(id)account;	// 0x338e51cd
- (void)_authenticationCancelled:(id)cancelled;	// 0x338e4eb9
- (void)_authenticationFailed:(id)failed;	// 0x338e4f7d
- (void)_authenticationSucceeded:(id)succeeded;	// 0x338e5101
- (void)_initiateAuthenticationForAccount:(id)account;	// 0x338e46d1
- (void)_networkStatusChanged:(id)changed;	// 0x338e45f1
- (id)_qualifyAccount:(id)account;	// 0x338e46e5
- (void)_removeUnauthorizedAccount:(id)account;	// 0x338e4671
- (BOOL)_shouldAttemptAuthenticationAgain:(id)again;	// 0x338e5489
- (void)_showPromptTimer:(id)timer;	// 0x338e47f5
- (void)_stopListeningForNotifications:(id)notifications object:(id)object;	// 0x338e4579
- (BOOL)brEventAction:(id)action;	// 0x338e4889
- (void)controlDidDisplayAsModalDialog;	// 0x338e47d5
- (void)controlWasActivated;	// 0x338e49a9
- (void)controlWasDeactivated;	// 0x338e493d
- (void)dealloc;	// 0x338e4a29
- (int)runModal;	// 0x338e52ed
@end
