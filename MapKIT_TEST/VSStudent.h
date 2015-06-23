//
//  VSStudent.h
//  MapKIT_TEST
//
//  Created by Владислав Станишевский on 6/23/15.
//  Copyright (c) 2015 Vlad Stanishevskij. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>

@interface VSStudent : NSObject

@property (strong, nonatomic) NSString* firstName;
@property (strong, nonatomic) NSString* lastName;
@property (assign, nonatomic) CLLocationCoordinate2D coordinate;

@end
