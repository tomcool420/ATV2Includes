/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import <BRSingleton.h> // Unknown library

@class NSError, NSDate, NSLock, ATVSWUpdateRecord, NSString, ATVRebootWaitController, NSMutableArray;

@interface ATVSWUpdateManager : BRSingleton <BRSelectionHandler> {
@private
	BOOL _checkInProgress;	// 4 = 0x4
	BOOL _downloadInProgress;	// 5 = 0x5
	BOOL _applyInProgress;	// 6 = 0x6
	BOOL _singleFileDownloadInProgress;	// 7 = 0x7
	BOOL _downloadUpdatesAfterCheck;	// 8 = 0x8
	BOOL _automaticUpdateTriggered;	// 9 = 0x9
	BOOL _forceFullUpdate;	// 10 = 0xa
	BOOL _cancelRequested;	// 11 = 0xb
	BOOL _waitingForUserConfirmation;	// 12 = 0xc
	BOOL _existingUpdateFilesAreCurrent;	// 13 = 0xd
	unsigned long long _amountDownloaded;	// 16 = 0x10
	NSDate *_downloadStartTime;	// 24 = 0x18
	NSError *_downloadError;	// 28 = 0x1c
	ATVRebootWaitController *_updateProgressController;	// 32 = 0x20
	ATVSWUpdateRecord *_pendingRecord;	// 36 = 0x24
	NSMutableArray *_licenses;	// 40 = 0x28
	BOOL _licenseAccepted;	// 44 = 0x2c
	NSString *_updateURL;	// 48 = 0x30
	NSLock *_accessLock;	// 52 = 0x34
}
+ (void)setSingleton:(id)singleton;	// 0x338fc871
+ (id)singleton;	// 0x338fc865
- (id)init;	// 0x338fc8c1
- (BOOL)_applyInProgress;	// 0x338fd021
- (void)_applyUpdates;	// 0x338fd55d
- (void)_checkStepFinishedWithInfo:(id)info;	// 0x338fccf1
- (void)_cleanUpFiles;	// 0x338fda35
- (BOOL)_constructUpdateURL:(BOOL)url;	// 0x338fd139
- (void)_createFilesDownloadedSentinelFile;	// 0x338fece5
- (id)_downloadError;	// 0x338fc881
- (id)_downloadFileForURL:(id)url error:(id *)error;	// 0x338fce25
- (id)_downloadLicensesFromRecord:(id)record;	// 0x338fd795
- (void)_downloadStepFinishedWithInfo:(id)info;	// 0x338fcc75
- (id)_downloadUpdatePayloadsFromRecord:(id)record;	// 0x338fd901
- (BOOL)_downloadUpdates:(id *)updates;	// 0x338ff721
- (BOOL)_downloadingAFile;	// 0x338fcf99
- (void)_errorDuringSoftwareUpdate:(id)update;	// 0x338fe295
- (BOOL)_existingUpdateFilesOnDiskAreValidAndCurrent:(id)current;	// 0x338fede9
- (id)_filesDownloadedSentinelPath;	// 0x338fcd6d
- (id)_getRetailType;	// 0x338fec15
- (id)_getUpdateIPAddress;	// 0x338fd0ed
- (void)_handleCheckStepFinished:(id)finished;	// 0x338fd70d
- (void)_handleDownloadStepFinished:(id)finished;	// 0x338fe851
- (id)_localFileForURL:(id)url destFileName:(id)name error:(id *)error;	// 0x338fdacd
- (id)_localFilePathForUpdateURL:(id)updateURL;	// 0x338fcdb9
- (void)_performCheckStep;	// 0x338ff2dd
- (void)_performDownloadStep;	// 0x338fefdd
- (void)_performMSUUpdateThreaded;	// 0x338ffb01
- (void)_playbackInitiated:(id)initiated;	// 0x338fca41
- (void)_sendCheckStartNotification;	// 0x338fcd35
- (void)_sendDownloadStartNotification;	// 0x338fccb9
- (void)_sendEmergencySpaceRequest:(id)request;	// 0x338fca69
- (void)_sendProgressNotification;	// 0x338fcacd
- (void)_setApplyInProgress:(BOOL)progress;	// 0x338fcfdd
- (void)_setCancelRequest:(BOOL)request;	// 0x338fce5d
- (void)_setCheckInProgress:(BOOL)progress;	// 0x338fd0a9
- (void)_setDownloadAFile:(BOOL)file;	// 0x338fcf55
- (void)_setDownloadError:(id)error;	// 0x338fcee5
- (void)_setDownloadInProgress:(BOOL)progress;	// 0x338fd065
- (void)_showLicenseAgreements;	// 0x338fe4e9
- (int)_showModalConfirmation:(BOOL)confirmation;	// 0x338fe705
- (void)_updateProgressStatus:(id)status;	// 0x338fe3cd
- (BOOL)_wasCancelRequested;	// 0x338fcea1
- (void)cancelUpdates;	// 0x338fdcc9
- (void)clearDownloadedUpdates;	// 0x338fd379
- (void)dealloc;	// 0x338fd471
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x338fc89d
- (void)download:(id)download didFailWithError:(id)error;	// 0x338fc9e5
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x338fd6a5
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x338fc899
- (void)download:(id)download willResumeWithResponse:(id)response fromByte:(long long)byte;	// 0x338fc895
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x338fc891
- (void)downloadDidBegin:(id)download;	// 0x338fca29
- (void)downloadDidFinish:(id)download;	// 0x338fca11
- (BOOL)handleSelectionForControl:(id)control;	// 0x338fd2d5
- (id)localUpdateFolderPath;	// 0x338fd5e1
- (BOOL)startDownload;	// 0x338fde99
- (BOOL)startExplicitUpdateCheck:(BOOL)check forceFullUpdate:(BOOL)update;	// 0x338fe169
- (void)startMonitoring;	// 0x338fd451
- (void)startPeriodicUpdateCheck;	// 0x338fe009
- (void)stopMonitoring;	// 0x338fc87d
- (BOOL)updateCheckInProgress;	// 0x338fd40d
- (BOOL)updateDownloadInProgress;	// 0x338fd3c9
- (unsigned long long)updateDownloadSize;	// 0x338fd3a1
- (void)updatesPostponed;	// 0x338fd325
@end

