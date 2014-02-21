//
//  OZMBViewController.m
//  OZMBVoice
//
//  Created by MB KWON on 2014. 2. 21..
//  Copyright (c) 2014년 Semtle_men. All rights reserved.
//

#import "OZMBViewController.h"
#import "OZMBVoice.h"

@interface OZMBViewController ()

@end

@implementation OZMBViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)readIt:(id)sender
{
    [[OZMBVoice theVoice] readString:_stringField.text];
}

@end
