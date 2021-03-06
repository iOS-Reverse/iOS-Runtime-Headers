/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldIndexTextEntry : PBCodable <NSCopying> {
    NSString * _artworkIdentifier;
    struct { 
        unsigned int shieldType : 1; 
    }  _has;
    NSMutableArray * _shieldTexts;
    int  _shieldType;
}

@property (nonatomic, retain) NSString *artworkIdentifier;
@property (nonatomic, readonly) BOOL hasArtworkIdentifier;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic, retain) NSMutableArray *shieldTexts;
@property (nonatomic) int shieldType;

- (void)addShieldText:(id)arg1;
- (id)artworkIdentifier;
- (void)clearShieldTexts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtworkIdentifier;
- (BOOL)hasShieldType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setHasShieldType:(BOOL)arg1;
- (void)setShieldTexts:(id)arg1;
- (void)setShieldType:(int)arg1;
- (id)shieldTextAtIndex:(unsigned int)arg1;
- (id)shieldTexts;
- (unsigned int)shieldTextsCount;
- (int)shieldType;
- (void)writeTo:(id)arg1;

@end
