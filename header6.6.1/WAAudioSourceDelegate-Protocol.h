//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol WAAudioSource;

@protocol WAAudioSourceDelegate <NSObject>
- (void)sourceDidError:(id <WAAudioSource>)arg1 error:(NSError *)arg2;
- (void)sourceDidFinishPlaying:(id <WAAudioSource>)arg1;
- (void)sourceSeeked:(id <WAAudioSource>)arg1;
- (void)sourceSeeking:(id <WAAudioSource>)arg1;
- (void)sourceStop:(id <WAAudioSource>)arg1;
- (void)sourcePaused:(id <WAAudioSource>)arg1;
- (void)sourceStartPlaying:(id <WAAudioSource>)arg1;
@end

