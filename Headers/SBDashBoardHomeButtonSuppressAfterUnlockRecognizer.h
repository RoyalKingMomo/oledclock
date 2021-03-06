//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBHomeButtonSuppressAfterUnlockRecognizer.h"

@class BSTimer, NSString;

@interface SBDashBoardHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer>
{
    id <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> _delegate;
    BSTimer *_timer;
    _Bool _done;
}

@property(nonatomic) __weak id <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timerFired;
- (void)_invalidateTimer;
- (void)_startTimer;
- (void)_requestEndOfSuppression;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

