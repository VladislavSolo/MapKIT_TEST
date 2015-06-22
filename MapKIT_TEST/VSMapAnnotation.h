//
//  VSMapAnnotation.h
//  MapKIT_TEST
//
//  Created by Владислав Станишевский on 6/22/15.
//  Copyright (c) 2015 Vlad Stanishevskij. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MKAnnotation.h>

@interface VSMapAnnotation : NSObject <MKAnnotation>

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@end
