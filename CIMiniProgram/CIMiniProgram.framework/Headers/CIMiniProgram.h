//
//  CIMiniProgram.h
//  CIMiniProgram
//
//  Created by daben on 2023/2/20.
//

#if __has_include(<CIMiniProgram/CIMiniProgram.h>)
//! Project version number for CIMiniProgram.
FOUNDATION_EXPORT double CIMiniProgramVersionNumber;

//! Project version string for CIMiniProgram.
FOUNDATION_EXPORT const unsigned char CIMiniProgramVersionString[];
#import <CIMiniProgram/CIMPAppManager.h>
#import <CIMiniProgram/CIMPApp.h>
#else
#import "CIMPAppManager.h"
#import "CIMPApp.h"
#endif
