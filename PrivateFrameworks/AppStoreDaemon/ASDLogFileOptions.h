//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface ASDLogFileOptions : NSObject <NSCopying>
{
    NSString *_logDirectoryPath;
    NSString *_logFileBaseName;
    unsigned long long _maxLogFileSize;
    long long _maxNumberOfLogFiles;
}

@property(nonatomic) long long maxNumberOfLogFiles; // @synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles;
@property(nonatomic) unsigned long long maxLogFileSize; // @synthesize maxLogFileSize=_maxLogFileSize;
@property(copy, nonatomic) NSString *logFileBaseName; // @synthesize logFileBaseName=_logFileBaseName;
@property(copy, nonatomic) NSString *logDirectoryPath; // @synthesize logDirectoryPath=_logDirectoryPath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

