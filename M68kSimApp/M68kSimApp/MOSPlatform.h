//
//  MOSPlatform.h
//  Tricky68k
//
//  Created by Daniele Cattaneo on 11/12/15.
//  Copyright © 2015 Daniele Cattaneo. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MOSPlatform : NSObject

@property (readonly) Class assemblerClass;
@property (readonly) Class simulatorClass;
@property (readonly) Class presentationClass;
@property (readonly) NSString *localizedName;

@end
