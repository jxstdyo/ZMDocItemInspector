//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTDocumentLocation : NSObject //<NSSecureCoding, NSCopying, DVTStringRepresentationPersistable, DVTSimpleSerialization>
{
    NSDictionary *_docParams;
    NSDictionary *_locParams;
    NSURL *_documentURL;
    NSNumber *_timestamp;
}

+ (BOOL)supportsSecureCoding;
+ (id)documentLocationWithURLScheme:(id)arg1 path:(id)arg2 documentParameters:(id)arg3 locationParameters:(id)arg4;
@property(readonly) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
//- (void).cxx_destruct;
- (id)locationParameters;
- (id)documentParameters;
- (id)documentPath;
- (id)documentScheme;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dvt_persistableStringRepresentation;
- (id)dvt_initFromPersistableStringRepresentation:(id)arg1 error:(id *)arg2;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (BOOL)isEqualToDocumentLocationDisregardingDocumentURL:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)documentURLString;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end