//
//  CompletedFuzzlePicCollectionViewController.h
//  FuzzlePic
//
//  Created by Benjamin Thomas Gurrola on 10/28/15.
//  Copyright © 2015 Benjamin Thomas Gurrola. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FuzzlePicCollectionViewCell.h"
#import "FuzzlePicObjectController.h"

@interface CompletedFuzzlePicCollectionViewController : UICollectionViewController

@property (strong,nonatomic,readonly) NSArray *completedImages;

+ (CompletedFuzzlePicCollectionViewController *)sharedInstance;

@end
