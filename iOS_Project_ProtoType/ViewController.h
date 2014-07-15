//
//  ViewController.h
//  iOS_Project_ProtoType
//
//  Created by HARDEEP SINGH on 2014-07-11.
//  Copyright (c) 2014 HARDEEP SINGH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"

@interface ViewController : UIViewController
{
    __weak IBOutlet UITextField *regNoTextField;
    __weak IBOutlet UITextField *nameTextField;
    __weak IBOutlet UITextField *departmentTextField;
    __weak IBOutlet UITextField *yearTextField;
    __weak IBOutlet UITextField *findByRegisterNumberTextField;
    __weak IBOutlet UIScrollView *myScrollView;
}

- (IBAction)saveData:(id)sender;
- (IBAction)findData:(id)sender;


@end
