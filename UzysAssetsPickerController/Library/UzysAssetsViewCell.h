//
//  UzysAssetsViewCell.h
//  UzysAssetsPickerController
//
//  Created by Uzysjung on 2014. 2. 12..
//  Copyright (c) 2014년 Uzys. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UzysAssetsPickerController_Configuration.h"
#import <Photos/Photos.h>
@interface UzysAssetsViewCell : UICollectionViewCell
- (void)applyData:(PHAsset *)asset;
@end
