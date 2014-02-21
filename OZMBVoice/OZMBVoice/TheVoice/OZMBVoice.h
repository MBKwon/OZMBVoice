//
//  OZMBVoice.h
//  OZMBVoice
//
//  Created by MB KWON on 2014. 2. 21..
//  Copyright (c) 2014년 Semtle_men. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OZMBVoice : NSObject

+(OZMBVoice *)theVoice;
-(void)readString:(NSString *)stringToSpeak;

@end
