/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityTodayWidgetView : UIView {
    HKUnit * _activeEnergyUnit;
    HKActivitySummary * _activitySummary;
    HKUnit * _basalEnergyUnit;
    UILabel * _exerciseTitleLabel;
    UILabel * _exerciseValueLabel;
    UILayoutGuide * _labelsBottomLayoutGuide;
    UILayoutGuide * _labelsTopLayoutGuide;
    UILabel * _moveTitleLabel;
    UILabel * _moveValueLabel;
    HKActivityRingView * _ringView;
    UIImageView * _ringViewSnapshot;
    UIFont * _smallCapsValueFont;
    UILabel * _standTitleLabel;
    UILabel * _standValueLabel;
    UIView * _textContainerView;
}

+ (id)_integerFormatter;
+ (float)preferredHeight;

- (void).cxx_destruct;
- (void)_animateCurrentActivitySummary;
- (void)_constrainLabels;
- (void)_renderRingImage;
- (void)_textSizeDidUpdate:(id)arg1;
- (void)_updateMoveValueLabelWithSummary:(id)arg1;
- (void)_updateStandTitleLabelWithSummary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 activeEnergyUnit:(id)arg2 basalEnergyUnit:(id)arg3;
- (void)layoutSubviews;
- (void)setActiveEnergyUnit:(id)arg1 basalEnergyUnit:(id)arg2;
- (void)setActivitySummary:(id)arg1 animated:(BOOL)arg2;
- (void)setIsWheelchairUser:(BOOL)arg1;
- (void)setupExerciseLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupMoveLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupRingViews;
- (void)setupStandLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupSubviews;
- (void)updateTextWithNewActivitySummary:(id)arg1;

@end