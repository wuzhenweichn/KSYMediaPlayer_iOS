//
//  LivePlayOperationView.h
//  KSYPlayerDemo
//
//  Created by devcdl on 2017/9/12.
//  Copyright © 2017年 kingsoft. All rights reserved.
//

#import "BaseView.h"

@class VideoModel;

@interface LivePlayOperationView : BaseView

@property (nonatomic, copy) void(^playStateBlock)(VCPlayHandlerState);
@property (nonatomic, copy) void(^screenShotBlock)(void);
@property (nonatomic, copy) void(^screenRecordeBlock)(void);
@property (nonatomic, copy) void(^mirrorBlock)(void);
@property (nonatomic, copy) void(^praiseBlock)(void);
@property (nonatomic, copy) void(^pictureRotateBlock)(void);

- (instancetype)initWithVideoModel:(VideoModel *)videoModel;

@end