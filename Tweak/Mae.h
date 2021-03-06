/* External Frameworks */
    #import <spawn.h>
    #import <Cephei/HBPreferences.h>
    #import "MFCommon/MaeCommon.hh"
/* Views & View Controllers */
    #import "MFViewControllers/MFSystemViewController.h"

@interface CCUIModularControlCenterViewController : UIViewController
+(id)sharedInstance;
@end

@interface CCUIModularControlCenterOverlayViewController : UIViewController
@property(nonatomic, retain) MFSystemViewController *controlCenterX;
@property(nonatomic, retain) UIView *overlayModuleCollectionView;
@property(nonatomic, retain) UIScrollView *overlayScrollView;
@property(nonatomic, retain) UIView *overlayBackgroundView;
@property(nonatomic, retain) UIView *overlayHeaderView;
-(void)_updatePresentationForLocationY:(double)arg1;
@end

@interface MTMaterialView : UIView
@end

@interface CCSModuleRepository : NSObject
-(id)_loadAllModuleMetadata;
@end

@interface CCSModuleMetadata : NSObject
+(instancetype)metadataForBundleAtURL:(id)arg1 ;
@property (nonatomic,copy,readonly) NSString* moduleIdentifier;
@end


/*
 * @interface SBControlCenterController : NSObject
 *  +(id)sharedInstance;
 *  -(void)presentAnimated:(BOOL)arg1;
 *  -(void)dismissAnimated:(BOOL)arg1;
 *  -(void)presentAnimated:(BOOL)arg1 completion:(id)arg2;
 *  -(void)dismissAnimated:(BOOL)arg1 completion:(id)arg2;
 * @end
*/