//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding>
{
    BOOL _ascending;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property BOOL ascending; // @synthesize ascending=_ascending;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 ascending:(BOOL)arg2;

@end

