//
//  YapDatabaseView+Shorthand.h
//  YapModel
//
//  Created by Francis Chong on 21/8/14.
//  Copyright (c) 2014 Ignition Soft. All rights reserved.
//

#import "YapDatabaseView.h"

@interface YapDatabaseView (Shorthand)

-(instancetype) initWithCollection:(NSString*)collection sortBy:(SEL)sortBySelector version:(int)version;

-(instancetype) initWithCollection:(NSString*)collection groupBy:(SEL)groupBySelector sortBy:(SEL)sortBySelector version:(int)version;

-(instancetype) initWithCollection:(NSString*)collection sortByDescriptor:(NSSortDescriptor*)sortDescriptor version:(int)version;

-(instancetype) initWithCollection:(NSString*)collection groupBy:(SEL)groupBySelector sortByDescriptor:(NSSortDescriptor*)sortDescriptor version:(int)version;

@end
