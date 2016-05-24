//
//  MessageFaceView.h
//  MessageDisplay
//
//  Created by zhoubin@moshi on 14-5-12.
//  Copyright (c) 2014年 Crius_ZB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBFaceView.h"

@protocol ZBMessageManagerFaceViewDelegate <NSObject>

- (void)sendTheFaceStr:(NSString *)faceStr isDelete:(BOOL)dele;

@end

@interface ZBMessageManagerFaceView : UIView<UIScrollViewDelegate,ZBFaceViewDelegate>

@property (nonatomic,assign)id<ZBMessageManagerFaceViewDelegate>delegate;

@end
