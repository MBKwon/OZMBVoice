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

//**********************************************************//
//
//
//Arabic (Saudi Arabia)                         ar-SA
//Chinese (China)                               zh-CN
//Chinese (Hong Kong SAR China)                 zh-HK
//Chinese (Taiwan)                              zh-TW
//Czech (Czech Republic)                        cs-CZ
//Danish (Denmark)                              da-DK
//Dutch (Belgium)                               nl-BE
//Dutch (Netherlands)                           nl-NL
//English (Australia)                           en-AU
//English (Ireland)                             en-IE
//English (South Africa)                        en-ZA
//English (United Kingdom)                      en-GB
//English (United States)                       en-US
//Finnish (Finland)                             fi-FI
//French (Canada)                               fr-CA
//French (France)                               fr-FR
//German (Germany)                              de-DE
//Greek (Greece)                                el-GR
//Hindi (India)                                 hi-IN
//Hungarian (Hungary)                           hu-HU
//Indonesian (Indonesia)                        id-ID
//Italian (Italy)                               it-IT
//Japanese (Japan)                              ja-JP
//Korean (South Korea)                          ko-KR
//Norwegian (Norway)                            no-NO
//Polish (Poland)                               pl-PL
//Portuguese (Brazil)                           pt-BR
//Portuguese (Portugal)                         pt-PT
//Romanian (Romania)                            ro-RO
//Russian (Russia)                              ru-RU
//Slovak (Slovakia)                             sk-SK
//Spanish (Mexico)                              es-MX
//Spanish (Spain)                               es-ES
//Swedish (Sweden)                              sv-SE
//Thai (Thailand)                               th-TH
//Turkish (Turkey)                              tr-TR
//
//**********************************************************//

@end