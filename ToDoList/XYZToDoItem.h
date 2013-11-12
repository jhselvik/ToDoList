//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Joe Selvik on 11/8/13.
//  Copyright (c) 2013 Joe Selvik. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
