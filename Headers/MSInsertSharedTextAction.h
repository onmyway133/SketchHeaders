//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSharedObjectAction.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface MSInsertSharedTextAction : MSSharedObjectAction <NSMenuDelegate>
{
}

- (id)label;
- (id)sharedObjectName;
- (id)imageName;
- (id)unsortedSharedObjects;
- (BOOL)validate;
- (void)updateMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (void)showSharedObjectsSheet:(id)arg1;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
