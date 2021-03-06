//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NTFindByContentParam : NSObject
{
    NSArray *_searchFolders;
    NSString *_content;
    struct FSSpec *_specArray;
    unsigned int _specCount;
}

+ (id)findParam:(id)arg1 content:(id)arg2;
- (id)initWithSearchFolders:(id)arg1 content:(id)arg2;
- (void)dealloc;
- (struct FSSpec *)searchFoldersFSSpecPtr:(unsigned int *)arg1;
- (id)searchFolders;
- (id)content;

@end

