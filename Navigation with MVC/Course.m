//
//  Course.m
//  Navigation with MVC
//
//  Created by student1 on 4/20/14.
//  Copyright (c) 2014 student1. All rights reserved.
//

#import "Course.h"

@implementation Course
@synthesize courseId, courseDesc, lecturer;

+(NSMutableArray *) getExistingCourses {
    NSMutableArray * courses =[[NSMutableArray alloc]init];
    
    [courses addObject:[[Course alloc]initWithId:@"S-OOAD"]];
     [courses addObject:[[Course alloc]initWithId:@"S-PMIS"]];
    [courses addObject:[[Course alloc]initWithId:@"S-JAVA EE"]];
    [courses addObject:[[Course alloc]initWithId:@"S-CSCRUM"]];
    return courses;
}

- (id) initWithId:(NSString *)myid{
    self = [super init];
    if(self){
        self.courseId = myid;
        return self;
    }
    else
        return self;

}
@end
