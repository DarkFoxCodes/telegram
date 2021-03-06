//
//  TGImageObject.h
//  Telegram
//
//  Created by keepcoder on 17.07.14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DownloadItem.h"
#import "TGCache.h"
#import "TLFileLocation+Extensions.h"
#import "ImageObject.h"
#import <SSignalKit/SSignalKit.h>
@class TGImageView;




@protocol TGImageObjectDelegate <NSObject>

@required
-(void)didDownloadImage:(NSImage *)image object:(id)object;


@optional
-(void)didUpdatedProgress:(float)progress;
@end

@interface TGImageObject : ImageObject

@property (nonatomic,assign) ImageProcessor imageProcessor;
@property (nonatomic,assign) ImageProcessor thumbProcessor;

+(SThreadPool *)threadPool;


-(BOOL)isset;



@end
