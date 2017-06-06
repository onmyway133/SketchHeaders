//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePartInspectorViewController.h"

@class MSColorPreviewButton, MSUpDownTextField, NSPopUpButton;

@interface MSBorderInspectorViewController : MSStylePartInspectorViewController
{
    NSPopUpButton *positionPopUp;
    MSColorPreviewButton *colorButton;
    MSUpDownTextField *_thicknessField;
}

@property(retain, nonatomic) MSUpDownTextField *thicknessField; // @synthesize thicknessField=_thicknessField;
- (void).cxx_destruct;
- (void)dealloc;
- (id)lineShapes;
- (void)borderThicknessChanged:(id)arg1;
- (void)enableAction:(id)arg1;
- (id)layers;
- (BOOL)canDrawInnerOrOuterBorders;
- (id)positionPopUpToolTip;
- (void)setStyleParts:(id)arg1;
- (void)prepare;
- (void)viewDidLoad;
- (id)init;

@end
