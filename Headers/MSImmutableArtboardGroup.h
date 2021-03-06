//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableArtboardGroup.h"

#import "MSArtboardGroup.h"
#import "MSImmutableRootLayer.h"
#import "MSLayerWithBackgroundColor.h"

@class MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid, NSString;

@interface MSImmutableArtboardGroup : _MSImmutableArtboardGroup <MSLayerWithBackgroundColor, MSArtboardGroup, MSImmutableRootLayer>
{
    struct CGSize _unscaledNameSize;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) struct CGSize unscaledNameSize; // @synthesize unscaledNameSize=_unscaledNameSize;
- (id)immutableBackgroundColor;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (struct CGPoint)rulerBase;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1;
- (BOOL)influenceRectClipsToBounds;
- (void)objectDidInit;
- (void)performInitWithUnarchiver:(id)arg1;
- (BOOL)exporterRequiresContentClipping;
- (id)exporterForWebOnPage:(id)arg1 document:(id)arg2 scale:(double)arg3;
- (id)possibleOverridesInDocument:(id)arg1 actualOverrides:(id)arg2 skipping:(id)arg3;
- (void)migratePropertiesFromV79OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV57OrEarlierWithUnarchiver:(id)arg1;
- (void)configureBackgroundOfRequest:(id)arg1;
- (void)prepareDrawingInContext:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (id)svgStyle:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isSelected;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;

@end

