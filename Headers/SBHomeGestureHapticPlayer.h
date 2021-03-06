//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVHapticPlayer, AVHapticPlayerChannel, CAMediaTimingFunction, NSObject<OS_dispatch_queue>, SBExternalSoundsDefaults;

@interface SBHomeGestureHapticPlayer : NSObject
{
    NSObject<OS_dispatch_queue> *_playerQueue;
    AVHapticPlayer *_player;
    AVHapticPlayerChannel *_channel;
    CAMediaTimingFunction *_rampTimingFunction;
    SBExternalSoundsDefaults *_externalSoundDefaults;
}

@property(retain, nonatomic) SBExternalSoundsDefaults *externalSoundDefaults; // @synthesize externalSoundDefaults=_externalSoundDefaults;
@property(retain, nonatomic) CAMediaTimingFunction *rampTimingFunction; // @synthesize rampTimingFunction=_rampTimingFunction;
@property(retain, nonatomic) AVHapticPlayerChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) AVHapticPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playerQueue; // @synthesize playerQueue=_playerQueue;
- (void).cxx_destruct;
- (_Bool)_areSystemHapticsEnabled;
- (void)_destroyPlayer;
- (void)_setupPlayer;
- (void)_addPlayerLifeCycleListeners;
- (void)stopPrewarm;
- (void)playMultitaskingHaptic;
- (void)startPrewarm;
- (void)dealloc;
- (id)init;

@end

