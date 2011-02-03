/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

typedef struct _NSZone NSZone;

typedef struct __ATVMediaItem *ATVMediaItemRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint _field1;
	CGSize _field2;
} CGRect;

typedef struct CGContext *CGContextRef;

typedef struct __ATVMediaType *ATVMediaTypeRef;

typedef struct __ATVMediaQuery *ATVMediaQueryRef;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __CFRunLoopSource *CFRunLoopSourceRef;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct __CFSocket *CFSocketRef;

typedef struct __CFString *CFStringRef;

typedef struct __SCNetworkService *SCNetworkServiceRef;

typedef struct __SCPreferences *SCPreferencesRef;

typedef struct {
	unsigned _field1;
	unsigned _field2;
	int _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned char _field7;
} XXStruct_ScK7BA;

typedef struct __IOHIDEventSystemClient *IOHIDEventSystemClientRef;

typedef struct __IOHIDServiceClient *IOHIDServiceClientRef;

typedef struct __IOHIDEvent *IOHIDEventRef;

typedef struct BRTimeRange {
	double _field1;
	double _field2;
} BRTimeRange;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct sqlite3 sqlite3;

typedef struct XML_ParserStruct *XML_ParserStructRef;

typedef struct _Alloc_hider {
	char *_field1;
} Alloc_hider;

template<>
struct basic_string<char,std::char_traits<char>,std::allocator<char> > {
	Alloc_hider _field1;
};

typedef struct _Vector_impl {
	int *_field1;
	int *_field2;
	int *_field3;
} Vector_impl;

template<>
struct vector<netflix::nccplib::ResponseData::LogCategoryType,std::allocator<netflix::nccplib::ResponseData::LogCategoryType> > {
	Vector_impl _field1;
};

typedef struct _Vector_impl {
	char *_field1;
	char *_field2;
	char *_field3;
} Vector_impl;

template<>
struct vector<unsigned char,std::allocator<unsigned char> > {
	Vector_impl _field1;
};

typedef struct LicenseResponseData {
	/*function-pointer*/ void **_field1;
	bool _field2;
	bool _field3;
	unsigned _field4;
	unsigned _field5;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field6;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field7;
	bool _field8;
	int _field9;
	int _field10;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field11;
	int _field12;
	int _field13;
	int _field14;
	int _field15;
	int _field16;
	int _field17;
	int _field18;
	int _field19;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field20;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field21;
	vector<netflix::nccplib::ResponseData::LogCategoryType,std::allocator<netflix::nccplib::ResponseData::LogCategoryType> > _field22;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field23;
	vector<unsigned char,std::allocator<unsigned char> > _field24;
	unsigned long long _field25;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field26;
	vector<unsigned char,std::allocator<unsigned char> > _field27;
} LicenseResponseData;

typedef struct TrickPlayData TrickPlayData;

typedef struct _Vector_impl {
	TrickPlayData *_field1;
	TrickPlayData *_field2;
	TrickPlayData *_field3;
} Vector_impl;

template<>
struct vector<netflix::nccplib::TrickPlayData,std::allocator<netflix::nccplib::TrickPlayData> > {
	Vector_impl _field1;
};

typedef struct DownloadableData DownloadableData;

typedef struct _Vector_impl {
	DownloadableData *_field1;
	DownloadableData *_field2;
	DownloadableData *_field3;
} Vector_impl;

template<>
struct vector<netflix::nccplib::DownloadableData,std::allocator<netflix::nccplib::DownloadableData> > {
	Vector_impl _field1;
};

typedef struct CdnData CdnData;

typedef struct _Vector_impl {
	CdnData *_field1;
	CdnData *_field2;
	CdnData *_field3;
} Vector_impl;

template<>
struct vector<netflix::nccplib::CdnData,std::allocator<netflix::nccplib::CdnData> > {
	Vector_impl _field1;
};

typedef struct StreamingParamData StreamingParamData;

typedef struct _Vector_impl {
	StreamingParamData *_field1;
	StreamingParamData *_field2;
	StreamingParamData *_field3;
} Vector_impl;

template<>
struct vector<netflix::nccplib::StreamingParamData,std::allocator<netflix::nccplib::StreamingParamData> > {
	Vector_impl _field1;
};

typedef struct AuthResponseData {
	/*function-pointer*/ void **_field1;
	bool _field2;
	bool _field3;
	unsigned _field4;
	unsigned _field5;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field6;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field7;
	bool _field8;
	int _field9;
	int _field10;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field11;
	int _field12;
	int _field13;
	int _field14;
	int _field15;
	int _field16;
	int _field17;
	int _field18;
	int _field19;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field20;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field21;
	vector<netflix::nccplib::ResponseData::LogCategoryType,std::allocator<netflix::nccplib::ResponseData::LogCategoryType> > _field22;
	basic_string<char,std::char_traits<char>,std::allocator<char> > _field23;
	int _field24;
	vector<unsigned char,std::allocator<unsigned char> > _field25;
	unsigned long long _field26;
	vector<netflix::nccplib::TrickPlayData,std::allocator<netflix::nccplib::TrickPlayData> > _field27;
	vector<netflix::nccplib::DownloadableData,std::allocator<netflix::nccplib::DownloadableData> > _field28;
	vector<netflix::nccplib::CdnData,std::allocator<netflix::nccplib::CdnData> > _field29;
	vector<netflix::nccplib::StreamingParamData,std::allocator<netflix::nccplib::StreamingParamData> > _field30;
} AuthResponseData;

