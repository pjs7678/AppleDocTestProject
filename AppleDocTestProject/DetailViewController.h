//
//  DetailViewController.h
//  AppleDocTestProject
//
//  Created by JongSu Park on 13. 1. 16..
//  Copyright (c) 2013년 JongSu Park. All rights reserved.
//

/** This class demonstrates AppleDoc.
 
 A second paragraph coms afters an empty line.
 
    int i=0;
    i++;
 
 And some sample code can also be in a block, but indented with a TAB
 */

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

/**-----------------------------------------------------------------------------------------------------------------
 * @name A name under which this method appears under "Tasks"
 * -----------------------------------------------------------------------------------------------------------------
 */

/** This is the first super-awesome method.
 
 You can also add lists, but have to keep an empty line between these blocks.
 
 - One
 - Two
 - Three
 
 @param string A parameter that is passed in.
 @return Whatever it returns.
 */
-(NSString *) someMethodsWithString:(NSString *)string;

/** This is the second super-awesome method.
 
 You can also add lists. but have to keep an empty line between these blocks.
 
 - One
 - Two
 - Three
 
 @param string A parameter that is passed in.
 @return Whatever it returns.
 */
-(NSString *) someMethodsWithString2:(NSString *)string;

/**-----------------------------------------------------------------------------------------------------------------
 * @name A name under which this method appears under "Tasks2"
 * -----------------------------------------------------------------------------------------------------------------
 */

/** This is the first super-awesome method.
 
 You can also add lists, but have to keep an empty line between these blocks.
 
 - One
 - Two
 - Three
 
 @param string A parameter that is passed in.
 @return Whatever it returns.
 */
-(NSString *) someMethodsWithString3:(NSString *)string;

/** This is the second super-awesome method.
 
 You can also add lists. but have to keep an empty line between these blocks.
 
 - One
 - Two
 - Three
 
 @param string A parameter that is passed in.
 @return Whatever it returns.
 */
-(NSString *) someMethodsWithString4:(NSString *)string;


/** This is the second super-awesome method.
 
 Note that there are additional cool things here, like [direct hyperlinks](http://www.cocoanetics.com)
 
 @param number A parameter that is passed in, almost as cool as someMethodWithString:
 @return Whatever it returns.
 @see someMethodsWithString:
 @warning *Warning:* A blue background
 @bug *Bug:* A yellow background
 */
-(NSString *)someMethodsWithInteger:(NSInteger)number;
@end
