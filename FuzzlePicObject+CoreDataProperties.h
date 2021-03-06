//
//  FuzzlePicObject+CoreDataProperties.h
//  FuzzlePic
//
//  Created by Benjamin Thomas Gurrola on 11/21/15.
//  Copyright © 2015 Benjamin Thomas Gurrola. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "FuzzlePicObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface FuzzlePicObject (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *currentState;
@property (nullable, nonatomic, retain) NSString *imageID;
@property (nullable, nonatomic, retain) NSNumber *imageIndex;

@end

NS_ASSUME_NONNULL_END
