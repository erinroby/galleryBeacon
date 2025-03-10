//
//  Piece.h
//  artiRelicAppleSomething
//
//  Created by David Swaintek on 8/10/16.
//  Copyright © 2016 Erin Roby. All rights reserved.
//

#import <Parse/Parse.h>

#import "Show.h"

@interface Piece : PFObject <PFSubclassing>


@property (strong, nonatomic)Show *show;
@property (strong, nonatomic)NSString *title;
@property (strong, nonatomic)NSString *subtitle;
@property (strong, nonatomic)NSString *desc;
@property (strong, nonatomic)NSString *artist;
@property (strong, nonatomic)NSString *price;
@property (strong, nonatomic)PFFile *image;
@property (strong, nonatomic)PFFile *thumbnail;
@property (strong, nonatomic)PFFile *audio;
@property (strong, nonatomic)NSString *beaconID;

+(instancetype)pieceWithTitle:(NSString *)title desc:(NSString *)desc artist:(NSString *)artist price:(NSString *)price;


@end
