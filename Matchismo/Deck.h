//
//  Deck.h
//  Matchismo
//
//  Created by Ángel Centeno on 14/02/13.
//  Copyright (c) 2013 Ángel Centeno. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (Card *)drawRandomCard;

@end
