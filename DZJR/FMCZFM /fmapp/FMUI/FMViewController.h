//
//  FMViewController.h
//  fmapp
//
//  Created by 李 喻辉 on 14-5-8.
//  Copyright (c) 2014年 yk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FMNavigationController.h"


/*  自定义了纯箭头图标的导航栏返回按钮。
 */
@interface FMViewController : UIViewController

@property (nonatomic, assign) BOOL enableCustomNavbarBackButton;    //默认YES，显示自定义的导航栏返回按钮
@property (nonatomic, assign) CGFloat navButtonSize;
@property (nonatomic, copy) void(^navBackButtonRespondBlock)(void);    //

@property (nonatomic,assign)NSInteger   tabbarIndex;

//设置导航栏标题
- (void) settingNavTitle:(NSString *)title;

//设置导航栏左侧按钮
- (void) setLeftNavButton:(UIImage* )btImage withFrame:(CGRect) frame actionTarget:(id)target action:(SEL) action;
- (void) setLeftNavButtonFA:(NSInteger)buttonType withFrame:(CGRect) frame actionTarget:(id)target action:(SEL) action;

//设置导航栏右侧按钮
- (void) setRightNavButton:(UIImage* )btImage withFrame:(CGRect) frame actionTarget:(id)target action:(SEL) action;
- (void)setRightNavButtonFA:(NSInteger)buttonType withFrame:(CGRect) frame actionTarget:(id)target action:(SEL) action;

- (void) startWaitting;
- (void) stopWaitting;
- (void) updateNaviTheme;

/** 显示小红点内容
 
 *@param displayAnnotation 若==YES，则显示并创建小红点儿；若为NO，则隐藏或者取消小红点儿
 *@return void
 **/
- (void) setRightNavBarButtonRedPointAnnotation:(BOOL)displayAnnotation;
@end
