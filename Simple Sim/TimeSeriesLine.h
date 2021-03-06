//
//  TimeSeriesAnalysis.h
//  Simple Sim
//
//  Created by Martin O'Connor on 31/01/2012.
//  Copyright (c) 2015 MARTIN OCONNOR. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CPTColor;

@interface TimeSeriesLine : NSObject{
    NSString *_name;
    int _layerIndex;
    NSUInteger _colourId;
    NSString *_colour;
    CPTColor *_cpColour;
    NSColor *_nsColour;
    NSArray *_allColourNames;
    NSArray *_allColourCPTypes;
    NSArray *_allNSColourTypes;
}

@property (retain) NSString *name;
@property int layerIndex;
@property NSUInteger colourId;
@property (retain, readonly) NSString *colour;
@property (retain) CPTColor *cpColour;
@property (retain) NSColor *nsColour;
@property (retain) NSArray *allColourNames;
@property (retain) NSArray *allColourCPTypes;
@property (retain) NSArray *allNSColourTypes;
@property NSUInteger simId;

- (id)initWithLayerIndex: (int)        layerIndex 
                 AndName: (NSString *)  name 
               AndColour: (NSString *)  colour;
- (id)initWithLayerIndex: (int) layerIndex
                 AndName: (NSString *) timeSeriesName
               AndColour: (NSString *) timeSeriesColour
                AndSimId: (long) simulationId;
- (NSString *)description;
- (void)setColourId:(NSUInteger) newColourId;
- (NSUInteger)colourId;


@end
