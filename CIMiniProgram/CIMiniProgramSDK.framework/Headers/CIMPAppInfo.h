//
//  CIMPAppInfo.h
//  CIMiniProgram
//
//  Created by 袁鑫 on 2020/4/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CIMPAppInfo : NSObject

// AppID小程序唯一标识
@property (nonatomic, copy) NSString *appId;

// 小程序的地址
@property (nonatomic, copy) NSString *appPath;

//  app下载的URL
@property (nonatomic, copy) NSString *appURL;

//app版本号
@property (nonatomic, copy) NSString *appVersion;

/*---------------------------------------  不是关键的属性关键字 --------------------------------------*/
// 本地地址 可以不填写
@property (nonatomic, copy) NSString *localAddress;

// 打开一个固定的页面
@property (nonatomic, copy) NSString *pointPageName;

// pages 显示debug的页面list 主要用于调式的页面 page和path
@property (nonatomic, strong) NSArray *pageList;

@end

NS_ASSUME_NONNULL_END
