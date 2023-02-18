//
//  CIMPApp.h
//  CIMiniProgram
//
//  Created by 袁鑫 on 2020/4/9.
//

#import <Foundation/Foundation.h>
#import "CIMPAppInfo.h"

NS_ASSUME_NONNULL_BEGIN
@class CIMPApp;

typedef void(^MoreActionBlock)(NSInteger);
// 退出app的回调
typedef void(^ExitAppActionBlock)(CIMPApp *app);

// 返回的函数名 和参数名 如果有callbackID 表示外面执行相关回调参数
typedef void(^MoreFunctionBlock)(NSString *command,NSString *callbackId,NSDictionary *param);

@class UINavigationController;
@class UIViewController;

@interface CIMPApp : NSObject

/**
 小程序配置信息
 */
@property (nonatomic, strong) CIMPAppInfo *appInfo;

/// 小程序打开小程序的方法
/// @param appid appid
/// @param appPath app的路径 可以为空 ？ 后面变为query
/// @param completion 完成后的回调
+(void)navigateToMiniProgramWithAppid:(NSString *)appid appPath:(NSString *)appPath completion:(void(^)(BOOL success, NSString *msg))completion;

/**
 初始化
 
 @param appInfo 小程序信息
 @return 小程序实例
 */
- (instancetype)initWithAppInfo:(CIMPAppInfo *)appInfo;

/**
 配置more按钮
 @param titles ActionSheet按钮文本
 @param action ActionSheet按钮点击事件
 */
- (void)setMoreButton:(NSArray<NSString *> *)titles action:(MoreActionBlock)action;


/// 点击方法的处理
/// @param action 回调参数
- (void)clickFunctionAction:(MoreFunctionBlock)action;

// 退出app的回调
- (void)exitAppAction:(ExitAppActionBlock)action;

/**
 获取more按钮弹出ActionSheet的按钮文本
 */
- (NSArray<NSString *> *)getMoreActionSheetTitles;

/**
 获取more按钮弹出ActionSheet的点击事件
 */
- (MoreActionBlock)getMoreActionSheetEvent;

// 获取更多actionFunction
- (MoreFunctionBlock)getFunctionAction;

// 获取退出的回调
- (ExitAppActionBlock)getExitAppAction;

// 执行callBackActon
- (void)bridgeCallback:(NSString *)callbackId params:(NSDictionary<NSString *, NSObject *> *)params;
/**
 下载小程序
 
 @param url 小程序包下载地址
 */
- (void)donwloadApp:(NSString *)url completion:(void (^)(BOOL success, NSString *errMsg))completion;

/**
 删除小程序
 */
- (void)deleteApp:(void (^)(BOOL success, NSString *errMsg))completion;

/**
 开启小程序
 */
- (void)startAppWithEntrance:(UINavigationController *)entrance;

/**
 获取Root
 */
- (UIViewController *)getRootPage;

/**
 获取RootNav
 */
- (UINavigationController *)getRootNav;

/**
 开启小程序
 */
- (void)startAppWithEntrance:(UINavigationController *)entrance completion:(void(^)(BOOL success, NSString *msg))completion;

// 打开本地小程序
- (void)startLocalAppWithEntrance:(UINavigationController *)entrance;

// 打开本地小程序
- (void)startLocalAppWithEntrance:(UINavigationController *)entrance completion:(void(^)(BOOL success, NSString *msg))completion;

/**
 回到首页
 */
- (void)popToRoot;

/**
 停止小程序
 */
- (void)stopApp;

/**
 小程序进入前台
 如果从非小程序页面进入小程序页面 则认为小程序进入前台 初始化进入除外
 */
- (void)onAppEnterForeground;

/**
 小程序进入后台
 如果将要展示的页面不是小程序页面 则认为小程序进入后台
 */
- (void)onAppEnterBackground;

/**
 判断是否为小程序根页面

 @return YES:是 NO:否
 */
- (BOOL)isAppRootPage:(UIViewController *)page;

// 得到当前页面相关参数
- (NSDictionary *)currentPageConfig;

@end

NS_ASSUME_NONNULL_END
