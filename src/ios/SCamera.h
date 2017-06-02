//
//  SCamera.h
//
//  Created by Christopher McCabe on 02/09/2016.
//
//  Modified by R.E. Moore Jr. 06/02/2017 -  added saveToPhotoAlbum

#import <Cordova/CDVPlugin.h>
#import "SimpleCam.h"

@interface SCPictureOptions : NSObject

@property (strong, nonatomic) NSNumber* quality;
@property (assign) CGSize targetSize;
@property (strong, nonatomic) NSString* encodingType;
@property (assign, nonatomic) BOOL saveToPhotoAlbum;

+ (instancetype) createFromTakePictureArguments:(CDVInvokedUrlCommand*)command;

@end


@interface SCamera : CDVPlugin <SimpleCamDelegate>

@property (strong) NSString* callbackId;
@property (strong) SCPictureOptions* pictureOptions;

- (void)takePicture:(CDVInvokedUrlCommand*)command;

@end
