//
//  Course.h
//  Navigation with MVC
//
//  Created by student1 on 4/20/14.
//  Copyright (c) 2014 student1. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Course : NSObject{
    NSString *courseId;
    NSString *courseDesc;
    NSString *lecturer;

}

@property (nonatomic,copy) NSString *courseId;
@property (nonatomic,copy) NSString *courseDesc;
@property (nonatomic,copy) NSString *lecturer;

+(NSMutableArray *) getExistingCourses;
-(id) initWithId:(NSString *)myid;

@end
