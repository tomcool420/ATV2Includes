/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@protocol NccpHandlerDelegate;

__attribute__((visibility("hidden")))
@interface NccpCommunicator : NSObject {
@private
	NSObject<NccpHandlerDelegate> *mNccpHandlerDelegate;	// 4 = 0x4
	BOOL mNeedRegister;	// 8 = 0x8
	BOOL mNeedsCredentials;	// 9 = 0x9
	int fujiTarget;	// 12 = 0xc
	BOOL mNeedCredentials;	// 16 = 0x10
}
@property(readonly, assign) BOOL needCredentials;	// G=0x33a2ef04; @synthesize=mNeedCredentials
@property(readonly, assign) BOOL needRegister;	// G=0x33a2ef18; @synthesize=mNeedRegister
+ (id)buildEsn:(int)esn;	// 0x33a30d44
+ (void)cleanUp;	// 0x33a30348
+ (BOOL)createWithDelegate:(id)delegate withTarget:(int)target useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp ncts:(id)ncts caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x33a2f61c
+ (id)deviceUserAgent;	// 0x33a2ee5c
+ (char *)esnPrefix:(int)prefix;	// 0x33a2fe80
+ (void)inactivePurgeSystemDataFiles;	// 0x33a2fb9c
+ (id)instance;	// 0x33a2ee6c
+ (BOOL)instantiated;	// 0x33a2ee7c
+ (void)setDeviceUserAgent:(id)agent;	// 0x33a2f7a0
+ (void)setUniqueIdentifier:(id)identifier;	// 0x33a2f814
+ (id)uniqueIdentifier;	// 0x33a2ee4c
- (id)initWithDelegate:(id)delegate;	// 0x33a30070
- (void)cleanUp;	// 0x33a2fd14
- (void)dealloc;	// 0x33a2f554
- (void)doBookmarkTh;	// 0x33a2f3d0
- (void)doRuntimeTh;	// 0x33a2f054
- (id)extractClientHash:(id)hash;	// 0x33a2f99c
- (BOOL)fillAuthorizationResponseData:(AuthResponseData *)data;	// 0x33a310d8
- (void)fillLicenseResponseData:(LicenseResponseData *)data;	// 0x33a2fde8
- (int)getAuthorizationET;	// 0x33a2edec
- (unsigned)getBookmark:(unsigned)bookmark;	// 0x33a35610
- (unsigned)getBookmarkTh:(unsigned)th;	// 0x33a2f4a8
- (int)getCdnSelectionET;	// 0x33a2ee3c
- (id)getCurrentMovieTitle;	// 0x33a30030
- (unsigned)getDownloadableIdForLicenseReq;	// 0x33a2eedc
- (unsigned)getLastTriedAuthMovieId;	// 0x33a2eea4
- (id)getLicense;	// 0x33a2eecc
- (int)getLicenseET;	// 0x33a2edfc
- (int)getMetaDataET;	// 0x33a2ee0c
- (int)getRegisterET;	// 0x33a2ee1c
- (double)getRunTime:(unsigned)time;	// 0x33a3210c
- (unsigned)getRunTimeTh:(unsigned)th;	// 0x33a2f138
- (id)getSimpleDownloadData;	// 0x33a2ee94
- (int)getUserMetaDataET;	// 0x33a2ee2c
- (void)handlePotentialUserChange;	// 0x33a339b4
- (void)invalidateAllResponseData;	// 0x33a2f520
- (void)invalidateAuthorizationResponseData;	// 0x33a2f25c
- (void)invalidateLicenseResponseData;	// 0x33a2f1e0
- (BOOL)is3GPlaybackAllowed;	// 0x33a2eeb8
// declared property getter: - (BOOL)needCredentials;	// 0x33a2ef04
// declared property getter: - (BOOL)needRegister;	// 0x33a2ef18
- (BOOL)netflixIdsMatch:(id)match :(id)arg2;	// 0x33a2f730
- (int)obtainDlid:(unsigned)dlid;	// 0x33a2ef2c
- (void)purgeUserRegistration;	// 0x33a2fcc4
- (void)removePreviousUserStoredData;	// 0x33a2fd80
- (BOOL)resendAuthorization;	// 0x33a301a0
- (void)saveShopperId;	// 0x33a3062c
- (BOOL)sendAuthorization:(unsigned)authorization trackId:(int)anId withContentProfiles:(id)contentProfiles needsCloseStream:(BOOL *)stream;	// 0x33a328b4
- (BOOL)sendLicense:(id)license;	// 0x33a3334c
- (BOOL)sendPing;	// 0x33a36224
- (BOOL)sendRegister;	// 0x33a35b18
- (void)setNccpUrls:(int)urls useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp ncts:(id)ncts;	// 0x33a3251c
- (void)setNeedCredentials;	// 0x33a2eeec
- (void)setNeedRegister;	// 0x33a2f1b0
- (bool)startNrdpWithServer:(int)server useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp ncts:(id)ncts caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x33a34028
- (void)triggerGetBookmark:(unsigned)bookmark;	// 0x33a2f2fc
- (void)triggerGetRuntime:(unsigned)runtime;	// 0x33a2ef80
- (BOOL)updateAuthorizationResponseData:(AuthResponseData *)data;	// 0x33a2f2b0
- (BOOL)updateCTicket:(unsigned long long)ticket;	// 0x33a319c0
- (BOOL)updateId:(id)anId idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x33a307a4
- (void)updateLicenseResponseData:(LicenseResponseData *)data;	// 0x33a2f214
@end

