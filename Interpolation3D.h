/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/


/** \brief Interpolates flight path between flythru steps
*/



#import <Cocoa/Cocoa.h>
#import "Point3D.h"

@interface Interpolation3D : NSObject {
}

- (void) addPoint: (float) t : (Point3D*) p;
- (Point3D*) evaluateAt: (float) t;

@end
