//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHWindowController.h"

#import "MSWelcomeCollectionViewDelegate.h"
#import "NSMenuDelegate.h"
#import "NSWindowDelegate.h"

@class MSCallToActionButton, MSPreviewImageCache, NSArray, NSButton, NSCollectionView, NSMenu, NSScrollView, NSSegmentedControl, NSString, NSTextField, NSView;

@interface MSWelcomeWindowController : CHWindowController <NSMenuDelegate, NSWindowDelegate, MSWelcomeCollectionViewDelegate>
{
    NSButton *_closeButton;
    NSCollectionView *_collectionView;
    NSScrollView *_collectionScrollView;
    NSView *_collectionStaticContainerView;
    NSSegmentedControl *_collectionsSegmentedControl;
    NSButton *_confirmButton;
    NSButton *_doNotShowAgainButton;
    MSCallToActionButton *_newsletterButton;
    MSCallToActionButton *_pluginsButton;
    NSMenu *_recentDocumentsContextMenu;
    NSMenu *_templatesContextMenu;
    NSTextField *_versionTextField;
    unsigned long long _collectionToShow;
    MSPreviewImageCache *_previewImageCache;
    NSArray *_cachedRecentDocumentItems;
    NSArray *_cachedTemplateItems;
}

+ (id)templateURLsAtDirectoryURL:(id)arg1;
+ (BOOL)hideWelcomeWindowIfNeeded;
+ (BOOL)showWelcomeWindowIfAppropriate;
+ (void)showWelcomeWindowCollection:(unsigned long long)arg1 isLaunching:(BOOL)arg2;
@property(retain, nonatomic) NSArray *cachedTemplateItems; // @synthesize cachedTemplateItems=_cachedTemplateItems;
@property(retain, nonatomic) NSArray *cachedRecentDocumentItems; // @synthesize cachedRecentDocumentItems=_cachedRecentDocumentItems;
@property(readonly, nonatomic) MSPreviewImageCache *previewImageCache; // @synthesize previewImageCache=_previewImageCache;
@property(nonatomic) unsigned long long collectionToShow; // @synthesize collectionToShow=_collectionToShow;
@property(retain, nonatomic) NSTextField *versionTextField; // @synthesize versionTextField=_versionTextField;
@property(retain, nonatomic) NSMenu *templatesContextMenu; // @synthesize templatesContextMenu=_templatesContextMenu;
@property(retain, nonatomic) NSMenu *recentDocumentsContextMenu; // @synthesize recentDocumentsContextMenu=_recentDocumentsContextMenu;
@property(retain, nonatomic) MSCallToActionButton *pluginsButton; // @synthesize pluginsButton=_pluginsButton;
@property(retain, nonatomic) MSCallToActionButton *newsletterButton; // @synthesize newsletterButton=_newsletterButton;
@property(retain, nonatomic) NSButton *doNotShowAgainButton; // @synthesize doNotShowAgainButton=_doNotShowAgainButton;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NSSegmentedControl *collectionsSegmentedControl; // @synthesize collectionsSegmentedControl=_collectionsSegmentedControl;
@property(retain, nonatomic) NSView *collectionStaticContainerView; // @synthesize collectionStaticContainerView=_collectionStaticContainerView;
@property(retain, nonatomic) NSScrollView *collectionScrollView; // @synthesize collectionScrollView=_collectionScrollView;
@property(retain, nonatomic) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 newItemForRepresentedObject:(id)arg2;
- (id)collectionItems;
- (id)templateItems;
- (id)recentDocumentItems;
- (void)clearRecentDocuments:(id)arg1;
- (void)revealDocumentInFinder:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
@property(readonly, nonatomic) long long numberOfDocuments;
- (void)openTemplateAtURL:(id)arg1;
- (void)openDocumentAtURL:(id)arg1;
- (void)joinSketchCloud:(id)arg1;
- (void)visitSketchMirrorPage:(id)arg1;
- (void)subscribeToNewsletter:(id)arg1;
- (void)visitPluginsPage:(id)arg1;
- (void)visitLearnPage:(id)arg1;
- (void)close:(id)arg1;
- (void)confirm:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)openDocument:(id)arg1;
- (void)refreshScrollability;
- (BOOL)shouldEnableCollectionViewScrolling;
- (void)showCollection:(unsigned long long)arg1;
- (void)pickCollection:(id)arg1;
- (void)togglePluginsButton:(BOOL)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)clearCaches;
- (void)centerWindowIfAppropriate;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

