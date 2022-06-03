//
//  RSServerConfigManager.h
//  RSSDKCore
//
//  Created by Arnab Pal on 17/10/19.
//  Copyright © 2019 RSlabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSServerConfigSource.h"
#import "RSConfig.h"
#import "RSPreferenceManager.h"

typedef enum {
    NETWORKERROR =1,
    NETWORKSUCCESS =0,
    WRONGWRITEKEY =2
} NETWORKSTATE;

NS_ASSUME_NONNULL_BEGIN

@interface RSServerConfigManager : NSObject

@property NSString *writeKey;
@property RSConfig *rudderConfig;
@property RSPreferenceManager *preferenceManager;

- (instancetype)init: (NSString*) writeKey rudderConfig:(RSConfig*) rudderConfig;
- (RSServerConfigSource*) getConfig;
- (NSDictionary<NSString*, NSString*>*) getDestinationToTransformationMapping;
- (int) getError;

@end

NS_ASSUME_NONNULL_END
