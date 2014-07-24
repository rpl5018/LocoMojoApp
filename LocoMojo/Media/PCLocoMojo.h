//
//  PCLocoMojo.h
//  LocoMojo
//
//  Created by Richard Lichkus on 7/24/14.
//  Copyright (c) 2014 CleverKnot LLC. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@class PCGradient;

@interface PCLocoMojo : NSObject

// iOS Controls Customization Outlets
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* loginDisabledTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* loginNormalTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* loginTwitterTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* facebookLoginTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* circleOverlayTargets;

// Colors
+ (UIColor*)loginBlueColor2;
+ (UIColor*)loginBlueColor;

// Gradients
+ (PCGradient*)loginBlue;

// Drawing Methods
+ (void)drawLoginDisabled;
+ (void)drawLoginNormal;
+ (void)drawLoginTwitter;
+ (void)drawFacebookLogin;
+ (void)drawCircleOverlay;

// Generated Images
+ (UIImage*)imageOfLoginDisabled;
+ (UIImage*)imageOfLoginNormal;
+ (UIImage*)imageOfLoginTwitter;
+ (UIImage*)imageOfFacebookLogin;
+ (UIImage*)imageOfCircleOverlay;

@end



@interface PCGradient : NSObject
@property(nonatomic, readonly) CGGradientRef CGGradient;
- (CGGradientRef)CGGradient NS_RETURNS_INNER_POINTER;

+ (instancetype)gradientWithColors: (NSArray*)colors locations: (const CGFloat*)locations;
+ (instancetype)gradientWithStartingColor: (UIColor*)startingColor endingColor: (UIColor*)endingColor;

@end
