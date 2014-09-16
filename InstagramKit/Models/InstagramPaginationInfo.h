//
//  InstagramPaginationInfo.h
//  InstagramKitDemo
//
//  Created by Shyam Bhat on 06/03/14.
//  Copyright (c) 2014 Shyam Bhat. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InstagramPaginationInfo : NSObject

@property (nonatomic, readonly) NSURL* nextURL;
@property (nonatomic, readonly) NSString *nextMaxId;
@property (nonatomic, readonly) Class type;
- (id)initWithInfo:(NSDictionary *)info andObjectType:(Class)type;

@end
