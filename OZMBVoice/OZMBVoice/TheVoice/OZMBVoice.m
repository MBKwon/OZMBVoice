//
//  OZMBVoice.m
//  OZMBVoice
//
//  Created by MB KWON on 2014. 2. 21..
//  Copyright (c) 2014년 Semtle_men. All rights reserved.
//

#import "OZMBVoice.h"
#import <AVFoundation/AVSpeechSynthesis.h>

@interface OZMBVoice ()

@property (strong, nonatomic) AVSpeechSynthesizer *speechSynthesizer;

@end

@implementation OZMBVoice

+(OZMBVoice *)theVoice
{
    static OZMBVoice *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[OZMBVoice alloc] init];
        instance.speechSynthesizer = [[AVSpeechSynthesizer alloc] init];
    });
    
    return instance;
}


-(void)readString:(NSString *)stringToSpeak
{
    [_speechSynthesizer speakUtterance:[AVSpeechUtterance speechUtteranceWithString:stringToSpeak]];
}

@end
