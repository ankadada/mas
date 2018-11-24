//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreUI/ASWriteReviewDialogView.h>

#import "NSControlTextEditingDelegate.h"
#import "NSTextFieldDelegate.h"

@class ASRatingControl, ASTextField, NSString;

@interface ASWriteReviewBodyView : ASWriteReviewDialogView <NSTextFieldDelegate, NSControlTextEditingDelegate>
{
    ASRatingControl *_ratingControl;
    ASTextField *_titleTextField;
    ASTextField *_bodyTextField;
    CDUnknownBlockType _titleDidChangeCallback;
    CDUnknownBlockType _bodyDidChangeCallback;
}

@property(copy, nonatomic) CDUnknownBlockType bodyDidChangeCallback; // @synthesize bodyDidChangeCallback=_bodyDidChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType titleDidChangeCallback; // @synthesize titleDidChangeCallback=_titleDidChangeCallback;
@property(readonly, nonatomic) ASTextField *bodyTextField; // @synthesize bodyTextField=_bodyTextField;
@property(readonly, nonatomic) ASTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(readonly, nonatomic) ASRatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
- (void).cxx_destruct;
- (void)applyConfiguration:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)viewDidMoveToWindow;
- (void)layout;
- (id)initWithConfiguration:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

