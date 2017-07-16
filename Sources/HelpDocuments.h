//
//  HelpDocuments.h
//  TeXShop
//
//  Created by Richard Koch on 7/14/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface HelpDocuments : NSObject {
	
	NSTask					*displayPackageHelpTask;
	IBOutlet NSPanel		*packageHelpPanel;
	IBOutlet NSPanel		*openStyleFilePanel;
	IBOutlet NSTextField	*packageResult;
	IBOutlet NSTextField	*styleFileResult;

}

- (IBAction)displayGettingStartedTeXShop:(id)sender;
- (IBAction)displayGettingStartedLatex:(id)sender;
- (IBAction)displayGettingStartedConTeXt:(id)sender;
- (IBAction)displayGettingStartedXeTeX:(id)sender;
- (IBAction)displayHelpForPackage:(id)sender;
- (IBAction)displayStyleFile:(id)sender;
- (IBAction)displayFileEncoding:(id)sender;
- (IBAction)displayTipsandTricks:(id)sender;
- (IBAction)displayTeXShopConfusion:(id)sender;
- (IBAction)displayNotesonApplescript:(id)sender;
- (IBAction)displayRecentTeXFonts:(id)sender;
- (IBAction)displayGPLLicense:(id)sender;

- (IBAction)displayShortCourse:(id)sender;
- (IBAction)displayHG:(id)sender;
- (IBAction)displayBinary:(id)sender;
- (IBAction)displayMoreBinary:(id)sender;
- (IBAction)displayNegatedBinary:(id)sender;
- (IBAction)displayBinaryOperations:(id)sender;
- (IBAction)displayArrows:(id)sender;
- (IBAction)displayMiscSymbols:(id)sender;
- (IBAction)displayDelimiters:(id)sender;
- (IBAction)displayOperators:(id)sender;
- (IBAction)displayLargeOperators:(id)sender;
- (IBAction)displayMathAccents:(id)sender;
- (IBAction)displayMathSpacing:(id)sender;
- (IBAction)displayEuropean:(id)sender;
- (IBAction)displayTextAccents:(id)sender;
- (IBAction)displayTextSizes:(id)sender;
- (IBAction)displayTextSymbols:(id)sender;
- (IBAction)displayTextSpacing:(id)sender;
- (IBAction)supplementsToDesktop:(id)sender;
- (IBAction)displayTables:(id)sender;
- (IBAction)displayThisRelease:(id)sender;

- (void)okForPanel:(id)sender;
- (void)cancelForPanel:(id)sender;

@end
