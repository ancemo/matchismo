//
//  PlayingCard.h
//  Matchismo
//
//  Created by Ángel Centeno on 14/02/13.
//  Copyright (c) 2013 Ángel Centeno. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong,nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
