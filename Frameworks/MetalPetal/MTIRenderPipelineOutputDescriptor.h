//
//  MTIRenderPipelineOutputDescriptor.h
//  Pods
//
//  Created by YuAo on 18/11/2017.
//

#import <Foundation/Foundation.h>
#import <Metal/Metal.h>
#import "MTITextureDimensions.h"
#import "MTIPixelFormat.h"

@interface MTIRenderPipelineOutputDescriptor: NSObject <NSCopying>

@property (nonatomic,readonly) MTITextureDimensions dimensions;

@property (nonatomic,readonly) MTLPixelFormat pixelFormat;

@property (nonatomic,readonly) MTLLoadAction loadAction;

@property (nonatomic,readonly) MTLStoreAction storeAction;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithDimensions:(MTITextureDimensions)dimensions pixelFormat:(MTLPixelFormat)pixelFormat;

- (instancetype)initWithDimensions:(MTITextureDimensions)dimensions pixelFormat:(MTLPixelFormat)pixelFormat loadAction:(MTLLoadAction)loadAction;

- (instancetype)initWithDimensions:(MTITextureDimensions)dimensions pixelFormat:(MTLPixelFormat)pixelFormat loadAction:(MTLLoadAction)loadAction storeAction:(MTLStoreAction)storeAction NS_DESIGNATED_INITIALIZER;

- (BOOL)isEqualToOutputDescriptor:(MTIRenderPipelineOutputDescriptor *)object;

@end
