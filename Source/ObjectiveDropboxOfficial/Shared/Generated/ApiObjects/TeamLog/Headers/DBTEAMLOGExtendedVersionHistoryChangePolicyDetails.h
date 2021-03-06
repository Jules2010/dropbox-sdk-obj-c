///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGExtendedVersionHistoryChangePolicyDetails;
@class DBTEAMLOGExtendedVersionHistoryPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ExtendedVersionHistoryChangePolicyDetails` struct.
///
/// Accepted or opted out of extended version history.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGExtendedVersionHistoryChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New extended version history policy.
@property (nonatomic, readonly) DBTEAMLOGExtendedVersionHistoryPolicy *dNewValue;

/// Previous extended version history policy. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGExtendedVersionHistoryPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New extended version history policy.
/// @param previousValue Previous extended version history policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGExtendedVersionHistoryPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGExtendedVersionHistoryPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New extended version history policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGExtendedVersionHistoryPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ExtendedVersionHistoryChangePolicyDetails`
/// struct.
///
@interface DBTEAMLOGExtendedVersionHistoryChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGExtendedVersionHistoryChangePolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGExtendedVersionHistoryChangePolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGExtendedVersionHistoryChangePolicyDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGExtendedVersionHistoryChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGExtendedVersionHistoryChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGExtendedVersionHistoryChangePolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGExtendedVersionHistoryChangePolicyDetails` object.
///
+ (DBTEAMLOGExtendedVersionHistoryChangePolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
