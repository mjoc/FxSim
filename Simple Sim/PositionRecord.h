//
//  PositionRecord.h
//  Simple Sim
//
//  Created by Martin O'Connor on 17/06/2012.
//  Copyright (c) 2015 MARTIN OCONNOR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PositionRecord : NSObject<NSCoding>{
//    int     _amount;        
//    long    _dateTime;
//    double  _price;
//    long    _interestAccruedDateTime;
//    double  _interestAccrued;
}

- (id) initWithAmount: (int) amount
          AndDateTime: (long) dateTime
             AndPrice: (double) price
  AndInterestDateTime: (long) interestDateTime
   AndInterestAccrued: (double) interestAccrued;

- (void) encodeWithCoder:(NSCoder*)encoder;
- (id) initWithCoder:(NSCoder*)decoder;
//- (id) valueStoredForKey: (NSString *) key;

@property  int    amount;
@property (readonly) long   dateTime;
@property (readonly) double price;
@property  long   interestAccruedDateTime;
@property  double interestAccrued;
 
@end
