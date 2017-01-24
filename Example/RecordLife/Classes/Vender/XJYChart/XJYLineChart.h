//
//  XJYLineChart.h
//  RecordLife
//
//  Created by 谢俊逸 on 17/01/2017.
//  Copyright © 2017 谢俊逸. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XJYAuxiliaryCalculationHelper.h"

typedef enum DrawLineType{
    PointType = 0,
    BrokenType ,
    BezierType,
}DrowLineType;

typedef NS_ENUM(NSUInteger, XJYLineChartType) {
    //仅有线和横竖坐标
    XJYLineChartTypeSimple,
    //有表格 default
    XJYLineChartTypeNormal,
    //有数值
    XJYLineChartTypeDetail,
};

@interface XJYLineChart : UIView

@property (nonatomic, assign) XJYLineChartType XJYLineChartType;

@property (nonatomic, strong) NSMutableArray *levelDataArray;//横坐标数据

@property (nonatomic, strong) NSMutableArray *ordinateDateArray;//纵坐标数据

//点数据
@property (nonatomic, strong) NSMutableArray *verticalNumberDataArray;
//第二组点
@property (nonatomic, strong) NSMutableArray *verticalSecondNumberDataArray;
//第三组点
@property (nonatomic, strong) NSMutableArray *verticalThirdNumberDataArray;


/**
 纵坐标最高点
 */
@property (nonatomic, strong) NSNumber *top;

/**
 纵坐标最低点
 */
@property (nonatomic, strong) NSNumber *bottom;

//折线的颜色 default is black
@property (nonatomic, strong) UIColor *lineColor;
@property (nonatomic, strong) UIColor *secondLineColor;
@property (nonatomic, strong) UIColor *thirdLineColor;

//点的颜色 default is red
@property (nonatomic, strong) UIColor *pointColor;
@property (nonatomic, strong) UIColor *secondPointColor;
@property (nonatomic, strong) UIColor *thirdPointColor;

//图表的背景颜色 default is white
@property (nonatomic, strong) UIColor *chartBackgroundColor;


// 数据
-(void)setData:(NSMutableArray*)LevelDataArray;
// 获取绘制类型
@property(assign,nonatomic) DrowLineType * LineType;
//点数据的日期
-(void)drawData:(NSMutableArray *)drawDataArray;
//画点的数据
-(void)drawDatacount:(NSMutableArray *)drawDataCountArry;

@end