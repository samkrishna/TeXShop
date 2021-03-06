//
//  TSMovie.m
//  TeXShop
//
//  Created by Richard Koch on 7/14/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import "Globals.h"
#import "TSMovie.h"



@implementation TSMovie 

- (void)getFile: (NSString *)title
{
    NSString *fullURLString = @"http://pages.uoregon.edu/koch/texshop/";
    NSString *destination = @"~/Library/TeXShop/Movies/TeXShop/";
    
    if ([title isEqualToString:@"Getting Started.mov"]) {
        fullURLString = [fullURLString stringByAppendingString: @"GettingStarted.mov.gzip"];
        destination = [[destination stringByAppendingString: @"Getting Started.mov"] stringByExpandingTildeInPath];
          }
    else if ([title isEqualToString:@"Initial Preferences.mov"]) {
        fullURLString = [fullURLString stringByAppendingString: @"InitialPreferences.mov.gzip"];
        destination = [[destination stringByAppendingString: @"Initial Preferences.mov"] stringByExpandingTildeInPath];
        }
    else
        return;
    
    NSURLRequest *theRequest = [NSURLRequest requestWithURL:[NSURL URLWithString:fullURLString]
                                            cachePolicy:NSURLRequestUseProtocolCachePolicy
                                            timeoutInterval:60.0];
    
    NSURLDownload  *theDownload = [[NSURLDownload alloc] initWithRequest:theRequest
                                                                delegate:self];
    
    if (theDownload) {
        // Set the destination file.
        [theDownload setDestination:destination allowOverwrite:YES];
    } else {
        // inform the user that the download failed.
    }
}



- (void)download:(NSURLDownload *)download didFailWithError:(NSError *)error
{
    // Dispose of any references to the download object
    // that your app might keep.
    // ...
    // Inform the user.
    NSRunAlertPanel(@"Error", @"Could not load Movie from repository. Try some other time.", @"OK", nil, nil);
}

- (void)downloadDidFinish:(NSURLDownload *)download
{
    // Dispose of any references to the download object
    // that your app might keep.
    // ...

    // Do something with the data.
    [self bringUpMovie];
}

- (BOOL)download:(NSURLDownload *)download
        shouldDecodeSourceDataOfMIMEType:(NSString *)encodingType
{
    BOOL shouldDecode = NO;
    if ([encodingType isEqual:@"application/x-gzip"]) {
        shouldDecode = YES;
    }
    return shouldDecode;
}



- (void)doMovie:(NSString *)title;
{
    NSFileManager   *myManager;
    NSString        *fileName;
    
    self.myTitle = title;
    
    if (self.movieWindow == nil)
        // we need to load the nib
        if ([NSBundle loadNibNamed:@"Movie" owner:self] == NO) {
            NSRunAlertPanel(@"Error", @"Could not load Movie.nib", @"stuff happens", nil, nil);
            return;
        }
    
    if (([title isEqualToString:@"Getting Started.mov"]) || ([title isEqualToString:@"Initial Preferences.mov"])) {
        fileName = [[[MoviesPath stringByAppendingString:@"/TeXShop/"] stringByAppendingString: title] stringByStandardizingPath];
        myManager = [NSFileManager defaultManager];
        if (! [myManager fileExistsAtPath:fileName])
            {
            // next call is on another thread, so abort
            [self getFile: title];
            return;
            }
        }
        
		// fill in all the values here since the window will be brought up for the first time
		/* koch: I moved this command two lines below, so it will ALWAYS be called
		when showing preferences: [self updateControlsFromUserDefaults:SUD]; */

    
    [self bringUpMovie];
    
}

- (void)bringUpMovie
{
    NSString        *fileName;

	fileName = [[[MoviesPath stringByAppendingString:@"/TeXShop/"] stringByAppendingString: self.myTitle] stringByStandardizingPath];
	NSData	*myData =  [NSData dataWithContentsOfFile:fileName];
	self.myMovie = [QTMovie movieWithData: myData error:nil];
	[self.myMovieView setMovie: self.myMovie];
/*
	currWindowBounds = [[self.myMovieView window] frame];
    topLeft.x = currWindowBounds.origin.x;
    topLeft.y = currWindowBounds.origin.y + currWindowBounds.size.height;
	
    // QTMovieCurrentSizeAttribute is deprecated, but no replacement is given in the
    // documentation. Since currently there are only two movies, we hard code their size
    // for now
    
    NSSize contentSize; // = [[myMovie attributeForKey:QTMovieCurrentSizeAttribute] sizeValue];
    contentSize.width = 635;
    contentSize.height = 406;
    
	fixedHeight = [self.myMovieView movieControllerBounds].size.height;
	contentSize.height += fixedHeight;

    if (contentSize.width == 0)
        contentSize.width = currWindowBounds.size.width;

    newWindowBounds = [[self.myMovieView window] frameRectForContentRect:NSMakeRect(0, 0, contentSize.width, contentSize.height)];
    [[self.myMovieView window] setFrame:NSMakeRect(topLeft.x, topLeft.y - newWindowBounds.size.height, newWindowBounds.size.width, newWindowBounds.size.height) display:NO];
*/
	[self.myMovieView setPreservesAspectRatio: YES];

	[self.movieWindow makeKeyAndOrderFront:self];
	
	[self.myMovieView play:self];
}


@end
