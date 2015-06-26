//
//  CRBubble.h
//  ProductTour
//
//  Created by Clément Raussin on 12/02/2014.
//  Copyright (c) 2014 Clément Raussin. All rights reserved.
//

#import <Foundation/Foundation.h>
#define CR_ARROW_SPACE 10
#define CR_ARROW_SIZE 12

@interface CRBubble : UIView
{
    NSArray *stringArray;
    int maxWidth;
    CGPoint isMoving;
    int swipeXPosition;
    int swipeYPosition;
    
    UILabel *titleLabel;
    UIVisualEffectView *effectView;

}


typedef enum {
    CRArrowPositionTop,
    CRArrowPositionBottom,
    CRArrowPositionRight,
    CRArrowPositionLeft
} CRArrowPosition;

@property (nonatomic, strong) UIView *attachedView;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *bubbleDescription;
@property (nonatomic, assign) CRArrowPosition arrowPosition;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, strong) NSString *fontName;

-(id)initWithAttachedView:(UIView*)view title:(NSString*)title description:(NSString*)bubbleDescription arrowPosition:(CRArrowPosition)arrowPosition andColor:(UIColor*)color;
-(id)initWithAttachedView:(UIView*)view title:(NSString*)title description:(NSString*)bubbleDescription arrowPosition:(CRArrowPosition)arrowPosition backgroundColor:(UIColor*)backgroundColor fontColor:(UIColor *)fontColor;
-(id)initWithAttachedView:(UIView *)view title:(NSString *)title description:(NSString *)bubbleDescription arrowPosition:(CRArrowPosition)arrowPosition backgroundColor:(UIColor *)backgroundColor fontColor:(UIColor *)fontColor viewEffect:(UIVisualEffect *) effect;

-(CGSize)size;
-(CGRect)frame;
-(CGSize) offsets;
@end
