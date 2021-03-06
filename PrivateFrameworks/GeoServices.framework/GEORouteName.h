/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteName : PBCodable <NSCopying> {
    struct { 
        unsigned int lastZilchStitchedIndex : 1; 
    }  _has;
    int  _lastZilchStitchedIndex;
    GEONameInfo * _nameInfo;
}

@property (nonatomic) BOOL hasLastZilchStitchedIndex;
@property (nonatomic, readonly) BOOL hasNameInfo;
@property (nonatomic) int lastZilchStitchedIndex;
@property (nonatomic, retain) GEONameInfo *nameInfo;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLastZilchStitchedIndex;
- (BOOL)hasNameInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)lastZilchStitchedIndex;
- (void)mergeFrom:(id)arg1;
- (id)nameInfo;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLastZilchStitchedIndex:(BOOL)arg1;
- (void)setLastZilchStitchedIndex:(int)arg1;
- (void)setNameInfo:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (struct CGImage { }*)_mapKitImage;

@end
