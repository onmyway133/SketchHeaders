//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSArtboardPresetsViewControllerDelegate.h"
#import "MSEditArtboardPresetViewControllerDelegate.h"
#import "MSInspectorChildController.h"

@class MSInsertArtboardEventHandler, NSString, NSView;

@interface MSInsertArtboardInspectorViewController : NSViewController <MSArtboardPresetsViewControllerDelegate, MSEditArtboardPresetViewControllerDelegate, MSInspectorChildController>
{
    BOOL _shouldAddInsertFromSelectionItem;
    MSInsertArtboardEventHandler *_eventHandler;
    NSView *_presetsContainerView;
    struct CGSize _sizeOfSelectedLayers;
}

@property(retain, nonatomic) NSView *presetsContainerView; // @synthesize presetsContainerView=_presetsContainerView;
@property(nonatomic) MSInsertArtboardEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) struct CGSize sizeOfSelectedLayers; // @synthesize sizeOfSelectedLayers=_sizeOfSelectedLayers;
@property(nonatomic) BOOL shouldAddInsertFromSelectionItem; // @synthesize shouldAddInsertFromSelectionItem=_shouldAddInsertFromSelectionItem;
- (void).cxx_destruct;
- (id)views;
- (void)selectionDidChangeTo:(id)arg1;
- (void)prepareForDisplay;
- (void)editArtboardPresetViewController:(id)arg1 savePreset:(id)arg2;
- (void)focusCanvasOnAllArtboards;
- (void)artboardPresetsViewController:(id)arg1 didSelectPreset:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id)presetsViewController;
- (void)viewWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

