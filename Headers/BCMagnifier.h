//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BCMagnifier : NSObject
{
}

+ (unsigned int)displayIDForScreenPoint:(struct CGPoint)arg1;
+ (id)colorFromScreenGrab:(id)arg1 mouse:(struct CGPoint)arg2;
+ (void)pickColorWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (struct CGPoint)pointInFlippedCoordinates:(struct CGPoint)arg1;

@end

