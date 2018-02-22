/*!
    UIImage extension
    RFKit

    Copyright (c) 2012-2016, 2018 BB9z
    https://github.com/BB9z/RFKit

    The MIT License (MIT)
    http://www.opensource.org/licenses/mit-license.php
 */

#import <UIKit/UIKit.h>

@interface UIImage (RFKit)

+ (nullable UIImage *)resourceName:(nonnull NSString *)PNGFileName DEPRECATED_ATTRIBUTE;
+ (nullable UIImage *)resourceName:(nonnull NSString *)fileName ofType:(nullable NSString *)type DEPRECATED_ATTRIBUTE;

/**
 Return the dimensions of the image in pixels, taking orientation into account.
 */
- (CGSize)pixelSize;

/**
 Creat a thumbnail image which it’s width and height not larger than the specified size.
 
 @param targetSize pixel size. Both width and height must be great than zero.
 
 @return New copyed image which has same scale with the reciver.
 */
- (UIImage *)thumbnailImageWithMaxSize:(CGSize)targetSize;

// Aspect scale, may crop image
- (UIImage *)imageAspectFillSize:(CGSize)targetSize opaque:(BOOL)opaque scale:(CGFloat)scale;

/**
 This method is equivalent to calling the imageAspectFillSize:opaque:scale: method with the opaque parameter set to `NO` and a scale factor of `1.0`.
 */
- (UIImage *)imageAspectFillSize:(CGSize)targetSize;

// Aspect scale, no crop
- (UIImage *)imageAspectFitSize:(CGSize)targetSize opaque:(BOOL)opaque scale:(CGFloat)scale;

/**
 This method is equivalent to calling the imageAspectFitSize:opaque:scale: method with the opaque parameter set to `NO` and a scale factor of `1.0`.
 */
- (UIImage *)imageAspectFitSize:(CGSize)targetSize;

// Crop image, no resize
- (UIImage *)imageWithCropRect:(CGRect)rect;

// Scale image, may change the aspect ratio
- (UIImage *)imageWithScaledSize:(CGSize)newSize;

// Scale image, keep the aspect ratio
- (UIImage *)imageWithScale:(CGFloat)scale;

#pragma mark - Tint color
/// @name Tint color

/** Creates and returns an tined image object that uses the specified color object.

 This method preserve the highlights, shadows and alpha of the source image.
 
 @see imageOnlyKeepsAlphaWithTintColor:
 
 @param tintColor A color used to tint the receiver.
 
 @return A tinted image.
*/
- (UIImage *)imageWithTintColor:(UIColor *)tintColor;

/** Creates and returns an tined image object that uses the specified color object.

 This method only preserve the alpha of the source image.
 
 @see imageWithTintColor:
 
 @param tintColor A color used to tint the receiver.
 
 @return A tinted image.
*/
- (UIImage *)imageOnlyKeepsAlphaWithTintColor:(UIColor *)tintColor;


@end
