/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSet : PBCodable <NSCopying> {
    NSString * _baseURL;
    int  _checksumType;
    NSMutableArray * _countryRegionWhitelists;
    unsigned int  _dataSet;
    struct { 
        unsigned int checksumType : 1; 
        unsigned int dataSet : 1; 
        unsigned int updateBehavior : 1; 
        unsigned int multiTileURLUsesStatusCodes : 1; 
    }  _has;
    NSString * _localizationURL;
    NSString * _multiTileURL;
    BOOL  _multiTileURLUsesStatusCodes;
    int  _scale;
    int  _size;
    int  _style;
    NSMutableArray * _supportedLanguages;
    int  _updateBehavior;
    NSMutableArray * _validVersions;
}

@property (nonatomic, retain) NSString *baseURL;
@property (nonatomic) int checksumType;
@property (nonatomic, retain) NSMutableArray *countryRegionWhitelists;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic, readonly) BOOL hasBaseURL;
@property (nonatomic) BOOL hasChecksumType;
@property (nonatomic) BOOL hasDataSet;
@property (nonatomic, readonly) BOOL hasLocalizationURL;
@property (nonatomic, readonly) BOOL hasMultiTileURL;
@property (nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
@property (nonatomic) BOOL hasUpdateBehavior;
@property (nonatomic, retain) NSString *localizationURL;
@property (nonatomic, retain) NSString *multiTileURL;
@property (nonatomic) BOOL multiTileURLUsesStatusCodes;
@property (nonatomic) int scale;
@property (nonatomic) int size;
@property (nonatomic) int style;
@property (nonatomic, retain) NSMutableArray *supportedLanguages;
@property (nonatomic) int updateBehavior;
@property (nonatomic, retain) NSMutableArray *validVersions;

+ (Class)countryRegionWhitelistType;
+ (Class)supportedLanguageType;
+ (Class)validVersionType;

- (int)StringAsChecksumType:(id)arg1;
- (int)StringAsScale:(id)arg1;
- (int)StringAsSize:(id)arg1;
- (int)StringAsStyle:(id)arg1;
- (int)StringAsUpdateBehavior:(id)arg1;
- (void)addCountryRegionWhitelist:(id)arg1;
- (void)addSupportedLanguage:(id)arg1;
- (void)addValidVersion:(id)arg1;
- (id)baseURL;
- (int)checksumType;
- (id)checksumTypeAsString:(int)arg1;
- (void)clearCountryRegionWhitelists;
- (void)clearSupportedLanguages;
- (void)clearValidVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryRegionWhitelistAtIndex:(unsigned int)arg1;
- (id)countryRegionWhitelists;
- (unsigned int)countryRegionWhitelistsCount;
- (unsigned int)dataSet;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBaseURL;
- (BOOL)hasChecksumType;
- (BOOL)hasDataSet;
- (BOOL)hasLocalizationURL;
- (BOOL)hasMultiTileURL;
- (BOOL)hasMultiTileURLUsesStatusCodes;
- (BOOL)hasUpdateBehavior;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizationURL;
- (void)mergeFrom:(id)arg1;
- (id)multiTileURL;
- (BOOL)multiTileURLUsesStatusCodes;
- (BOOL)readFrom:(id)arg1;
- (int)scale;
- (id)scaleAsString:(int)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setChecksumType:(int)arg1;
- (void)setCountryRegionWhitelists:(id)arg1;
- (void)setDataSet:(unsigned int)arg1;
- (void)setHasChecksumType:(BOOL)arg1;
- (void)setHasDataSet:(BOOL)arg1;
- (void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1;
- (void)setHasUpdateBehavior:(BOOL)arg1;
- (void)setLocalizationURL:(id)arg1;
- (void)setMultiTileURL:(id)arg1;
- (void)setMultiTileURLUsesStatusCodes:(BOOL)arg1;
- (void)setScale:(int)arg1;
- (void)setSize:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setUpdateBehavior:(int)arg1;
- (void)setValidVersions:(id)arg1;
- (int)size;
- (id)sizeAsString:(int)arg1;
- (int)style;
- (id)styleAsString:(int)arg1;
- (id)supportedLanguageAtIndex:(unsigned int)arg1;
- (id)supportedLanguages;
- (unsigned int)supportedLanguagesCount;
- (int)updateBehavior;
- (id)updateBehaviorAsString:(int)arg1;
- (id)validVersionAtIndex:(unsigned int)arg1;
- (id)validVersions;
- (unsigned int)validVersionsCount;
- (void)writeTo:(id)arg1;

@end