//
//  UIView+MKAnnotationView.m
//  MapKIT_TEST
//
//  Created by Владислав Станишевский on 6/22/15.
//  Copyright (c) 2015 Vlad Stanishevskij. All rights reserved.
//

#import "UIView+MKAnnotationView.h"
#import <MapKit/MKAnnotationView.h>

@implementation UIView (MKAnnotationView)

- (MKAnnotationView *)superAnnotationView {
    
    if ([self isKindOfClass:[MKAnnotationView class]]) {
        
        return (MKAnnotationView *)self;
    }
    
    if (!self.superview) {
        return nil;
    }
    
    return [self.superview superAnnotationView];
}


@end
