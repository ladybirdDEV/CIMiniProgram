//
//  CIMPAppManager.h
//  AFNetworking
//
//  Created by 袁鑫 on 2020/4/9.
//  Copyright © 2020 Nanjing Xihui Information & Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class CIMPApp;

@interface CIMPAppManager : NSObject

@property (nonatomic, assign) BOOL enableLog;

+ (instancetype)sharedManager;

// 设置viewController
@property (nonatomic, strong) UIViewController *baseVC;
@property (nonatomic, strong) UINavigationController *baseNav;

/**
 获取现有小程序列表
 
 @return 小程序列表
 */
- (NSArray *)getApplist;

// 获取本地解压的小程序列表
- (NSArray *)getLocalAppList;

// 获取本地和解压缩
- (NSMutableArray *)getTotalAppList;

- (void)setAppSharedData:(id)data;

// 配置小程序
- (void)configMiniAppDic:(NSDictionary *)dic;

// 获取小程序配置
- (id)getConfigByKey:(NSString *)configKey;

/**
 添加小程序
 */
- (void)addApp:(CIMPApp *)app;

/**
 移除小程序
 */
- (void)removeApp:(CIMPApp *)app;

/**
 判断小程序是否在运行
 
 @param appId 小程序ID
 @return YES:是 NO:否
 */
- (BOOL)isAppRunning:(NSString *)appId;

/**
 获取当前运行的小程序
 */
- (CIMPApp *)currentApp;

// 退出当然运行的小程序
- (void)exitApp;

@end

NS_ASSUME_NONNULL_END
