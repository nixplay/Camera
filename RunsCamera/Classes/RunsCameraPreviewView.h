//
//  RunsCameraPreviewView.h
//  Hey
//
//  Created by wang on 2017/5/28.
//  Copyright © 2017年 www.dev_wang.com. All rights reserved.
//  Modified by James Kong on 2018/2/1

#import <UIKit/UIKit.h>

#import "RunsCameraPreviewViewDelegate.h"

@interface RunsCameraPreviewView : UIView
@property (nonatomic, weak) id<RunsCameraPreviewViewDelegate> delegate;
@end


@interface RunsVideoAsset : NSObject
@property (nonatomic, readonly) NSData *data;//video原始数据
@property (nonatomic, readonly) UIImage *preview;//video第一帧preview
@property (nonatomic, readonly) NSTimeInterval duration;//video时长秒数
@property (nonatomic, readonly) AVAsset *asset;
- (instancetype)initWithData:(NSData *)video preview:(UIImage *)image duration:(NSTimeInterval)interval asset:(AVAsset *)playerItemAsset;
@end
