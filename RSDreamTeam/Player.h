//
//  Player.h
//  RSDreamTeam
//
//  Created by Ross Simmerman on 7/15/14.
//  Copyright (c) 2014 RossSimmerman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Photo;

@interface Player : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * position;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSSet *photos;
@end

@interface Player (CoreDataGeneratedAccessors)

- (void)addPhotosObject:(Photo *)value;
- (void)removePhotosObject:(Photo *)value;
- (void)addPhotos:(NSSet *)values;
- (void)removePhotos:(NSSet *)values;

@end
