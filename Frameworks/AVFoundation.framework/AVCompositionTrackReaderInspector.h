/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    struct OpaqueFigMutableComposition { } *_figMutableComposition;
}

@property(getter=_mutableComposition,readonly) OpaqueFigMutableComposition *mutableComposition;

- (id)_initWithAsset:(id)arg1 trackID:(NSInteger)arg2 trackIndex:(long)arg3;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (void)dealloc;
- (void)finalize;
- (id)segments;

@end