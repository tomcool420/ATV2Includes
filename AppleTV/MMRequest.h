/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, NSError, NSData, NSString, NSURL, NSHTTPURLResponse, NSURLCredential, NSMutableDictionary, NSURLConnection;

__attribute__((visibility("hidden")))
@interface MMRequest : NSObject {
@private
	NSData *_messageBody;	// 4 = 0x4
	NSString *_method;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_originalUrl;	// 16 = 0x10
	NSMutableDictionary *_requestHeaders;	// 20 = 0x14
	NSHTTPURLResponse *_response;	// 24 = 0x18
	NSMutableData *_responseData;	// 28 = 0x1c
	NSURLCredential *_credentials;	// 32 = 0x20
	NSError *_error;	// 36 = 0x24
	NSURLConnection *_connection;	// 40 = 0x28
	BOOL _requestStarted;	// 44 = 0x2c
	BOOL _requestCompleted;	// 45 = 0x2d
}
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x33b3f4a5; S=0x33b3fe75; @synthesize=_connection
@property(retain, nonatomic) NSURLCredential *credentials;	// G=0x33b3f4c5; S=0x33b3fe25; @synthesize=_credentials
@property(retain, nonatomic) NSError *error;	// G=0x33b3f4b5; S=0x33b3fe4d; @synthesize=_error
@property(retain, nonatomic) NSData *messageBody;	// G=0x33b3f545; S=0x33b3fd35; @synthesize=_messageBody
@property(retain, nonatomic) NSString *method;	// G=0x33b3f535; S=0x33b3fd5d; @synthesize=_method
@property(retain, nonatomic) NSURL *originalUrl;	// G=0x33b3f515; S=0x33b3fdad; @synthesize=_originalUrl
@property(assign, nonatomic) BOOL requestCompleted;	// G=0x33b3f465; S=0x33b3f475; @synthesize=_requestCompleted
@property(retain, nonatomic) NSMutableDictionary *requestHeaders;	// G=0x33b3f505; S=0x33b3fdd5; @synthesize=_requestHeaders
@property(assign, nonatomic) BOOL requestStarted;	// G=0x33b3f485; S=0x33b3f495; @synthesize=_requestStarted
@property(retain, nonatomic) NSHTTPURLResponse *response;	// G=0x33b3f4f5; S=0x33b3fdfd; @synthesize=_response
@property(assign, nonatomic) NSMutableData *responseData;	// G=0x33b3f4d5; S=0x33b3f4e5; @synthesize=_responseData
@property(retain, nonatomic) NSURL *url;	// G=0x33b3f525; S=0x33b3fd85; @synthesize=_url
- (id)initWithMessage:(id)message usingMethod:(id)method headers:(id)headers url:(id)url;	// 0x33b3f9f1
- (void)_cleanUpConnection;	// 0x33b3f67d
- (void)_runRequestThread;	// 0x33b3fb7d
- (id)_urlRequest;	// 0x33b3f701
// declared property getter: - (id)connection;	// 0x33b3f4a5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33b3fc95
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x33b3f5cd
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33b3f56d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33b3f555
- (void)connectionDidFinishLoading:(id)connection;	// 0x33b3fc75
// declared property getter: - (id)credentials;	// 0x33b3f4c5
- (void)dealloc;	// 0x33b3f905
// declared property getter: - (id)error;	// 0x33b3f4b5
- (int)httpStatusCode;	// 0x33b3f8a1
// declared property getter: - (id)messageBody;	// 0x33b3f545
// declared property getter: - (id)method;	// 0x33b3f535
// declared property getter: - (id)originalUrl;	// 0x33b3f515
// declared property getter: - (BOOL)requestCompleted;	// 0x33b3f465
// declared property getter: - (id)requestHeaders;	// 0x33b3f505
// declared property getter: - (BOOL)requestStarted;	// 0x33b3f485
// declared property getter: - (id)response;	// 0x33b3f4f5
// declared property getter: - (id)responseData;	// 0x33b3f4d5
- (id)result;	// 0x33b3f88d
- (void)sendAsynchronously;	// 0x33b3f8cd
- (void)sendSynchronously;	// 0x33b3fb25
// declared property setter: - (void)setConnection:(id)connection;	// 0x33b3fe75
// declared property setter: - (void)setCredentials:(id)credentials;	// 0x33b3fe25
// declared property setter: - (void)setError:(id)error;	// 0x33b3fe4d
// declared property setter: - (void)setMessageBody:(id)body;	// 0x33b3fd35
// declared property setter: - (void)setMethod:(id)method;	// 0x33b3fd5d
// declared property setter: - (void)setOriginalUrl:(id)url;	// 0x33b3fdad
// declared property setter: - (void)setRequestCompleted:(BOOL)completed;	// 0x33b3f475
// declared property setter: - (void)setRequestHeaders:(id)headers;	// 0x33b3fdd5
// declared property setter: - (void)setRequestStarted:(BOOL)started;	// 0x33b3f495
// declared property setter: - (void)setResponse:(id)response;	// 0x33b3fdfd
// declared property setter: - (void)setResponseData:(id)data;	// 0x33b3f4e5
// declared property setter: - (void)setUrl:(id)url;	// 0x33b3fd85
- (void)setUsername:(id)username andPassword:(id)password;	// 0x33b3f7f1
- (void)setValue:(id)value forHeader:(id)header;	// 0x33b3f851
// declared property getter: - (id)url;	// 0x33b3f525
@end

