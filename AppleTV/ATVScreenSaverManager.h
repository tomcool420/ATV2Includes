/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

//#import <BRSingleton.h> // Unknown library

@class NSTimer, BRWindow, ATVScreenSaverPrefetchTask, BRSingleton;

@interface ATVScreenSaverManager : BRSingleton {
@private
	NSTimer *_timer;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	BRWindow *_window;	// 16 = 0x10
	long _state;	// 20 = 0x14
	BOOL _enabled;	// 24 = 0x18
	BOOL _screenSaverPosted;	// 25 = 0x19
	BOOL _handlingTimeoutChangeNotification;	// 26 = 0x1a
	ATVScreenSaverPrefetchTask *_prefetchTask;	// 28 = 0x1c
	BOOL _screenSaverAutoFired;	// 32 = 0x20
}
+ (id)screenSaverFaces;	// 0x338f7895
+ (id)screenSaverFacesCachePath;	// 0x338f78c9
+ (void)setSingleton:(id)singleton;	// 0x338f6c05
+ (id)singleton;	// 0x338f6bf9
- (id)init;	// 0x338f79dd
- (BOOL)_allowedToLoadPrincipalClassNamed:(id)loadPrincipalClassNamed;	// 0x338f6c11
- (id)_control;	// 0x338f732d
- (void)_createTimer;	// 0x338f761d
- (void)_dismissScreenSaver:(id)saver;	// 0x338f725d
- (void)_fadeFinished;	// 0x338f7e95
- (void)_prefetchComplete:(id)complete;	// 0x338f6d29
- (void)_screenSaverArchiveChanged:(id)changed;	// 0x338f6f39
- (void)_screenSaverControllerActivate:(id)activate;	// 0x338f7221
- (void)_screenSaverControllerDeactivate:(id)deactivate;	// 0x338f71d9
- (void)_screenSaverFired:(id)fired;	// 0x338f7579
- (void)_screenSaverIntervalChanged:(id)changed;	// 0x338f7085
- (void)_serverStatusChanged:(id)changed;	// 0x338f80b9
- (void)_startOneTimePrefetchTask:(id)task;	// 0x338f6e41
- (void)_startRepeatingPrefetchTask;	// 0x338f6d59
- (void)_stopPrefetchTask;	// 0x338f6c9d
- (void)_updateActivity:(id)activity;	// 0x338f72cd
- (BOOL)_validateBundleAtPath:(id)path;	// 0x338f81dd
- (void)dealloc;	// 0x338f792d
- (void)enable;	// 0x338f786d
- (id)screenSaverPathsFromDirectory:(id)directory;	// 0x338f7725
- (BOOL)screenSaverPrefetchActive;	// 0x338f769d
- (BOOL)screenSaverRequiresPrefetch;	// 0x338f76c1
- (void)showScreenSaver;	// 0x338f7bc9
@end

