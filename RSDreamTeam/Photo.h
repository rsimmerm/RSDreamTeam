//
//  Photo.h
//  RSDreamTeam
//
//  Created by Ross Simmerman on 7/15/14.
//  Copyright (c) 2014 RossSimmerman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Player;

@interface Photo : NSManagedObject

@property (nonatomic, retain) id image;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) Player *photoBook;

@end
