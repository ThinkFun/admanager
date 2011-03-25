//
//  AdManager.h
//  SolChess
//
//  Created by Samuel Ritchie on 10/11/10.
//  Copyright 2010 Threadlock Design. All rights reserved.
//

#import <iAd/iAd.h>

@interface AdManager : NSObject <ADBannerViewDelegate> {
	
	ADBannerView *adBannerView;
	NSString *portraitBanner, *landscapeBanner;
}

@property (nonatomic, retain) ADBannerView *adBannerView;

+ (id)sharedAdManager;

-(void) configureBanners;

-(void) attachAdToView:(UIView *)view;
-(void) fixBannerToDeviceOrientation:(UIInterfaceOrientation)orientation;

@end