//
//  PushNotificationsApp
//
//  (c) Pushwoosh 2014
//

@interface CustomPageViewController : UIViewController

@property (nonatomic, strong) UIColor *bgColor;
@property (nonatomic, assign) NSInteger pageId;

@property (nonatomic, weak) IBOutlet UILabel *titleLabel;

@end
