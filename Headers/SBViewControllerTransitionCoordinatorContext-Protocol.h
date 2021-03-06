//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBViewControllerTransitionRestartedReporting.h"
#import "UIViewControllerTransitionCoordinatorContext.h"

@class BSUIAnimationFactory;

@protocol SBViewControllerTransitionCoordinatorContext <UIViewControllerTransitionCoordinatorContext, SBViewControllerTransitionRestartedReporting>
- (_Bool)wasPreviousPhaseInteractive;
- (unsigned long long)transitionAnimationOptions;
- (BSUIAnimationFactory *)transitionAnimationFactory;
@end

