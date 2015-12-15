
#import <UIKit/UIKit.h>
#import <Google/SignIn.h>

// [START viewcontroller_interfaces]
@interface ViewController : UIViewController <GIDSignInUIDelegate>
// [END viewcontroller_interfaces]

// [START viewcontroller_vars]
@property (weak, nonatomic) IBOutlet GIDSignInButton *signInButton;
@property (weak, nonatomic) IBOutlet UIButton *signOutButton;
@property (weak, nonatomic) IBOutlet UIButton *disconnectButton;
@property (weak, nonatomic) IBOutlet UILabel *statusText;
// [END viewcontroller_vars]

@end
