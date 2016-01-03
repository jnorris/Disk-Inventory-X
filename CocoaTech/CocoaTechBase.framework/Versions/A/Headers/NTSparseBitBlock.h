//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NTSparseBitBlock : NSObject
{
    NSMutableDictionary *_sparseBits;
}

- (id)init;
- (void)dealloc;
- (BOOL)isBitSet:(unsigned int)arg1 inBits:(unsigned int)arg2;
- (BOOL)isBitSet:(unsigned int)arg1;
- (int)numBitsSet;
- (id)onBits;
- (id)offBits;
- (void)setBit:(unsigned int)arg1;
- (void)setBits:(id)arg1;
- (void)clearBit:(unsigned int)arg1;
- (void)clearBits:(id)arg1;
- (void)clear;
- (int)firstSetBit;
- (int)lastSetBit;

@end
