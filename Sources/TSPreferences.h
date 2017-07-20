/*
 * TeXShop - TeX editor for Mac OS
 * Copyright (C) 2000-2005 Richard Koch
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * $Id: TSPreferences.h 133 2006-05-21 11:52:24Z fingolfin $
 *
 * Created by dirk on Thu Dec 07 2000.
 *
 */

#import "UseMitsu.h"

#import <AppKit/AppKit.h>

@interface TSPreferences : NSObject
{
	IBOutlet NSWindow	*_prefsWindow;			/*" connected to the window "*/
	IBOutlet NSTextField	*_documentFontTextField;	/*" connected to "Document Font" "*/
	IBOutlet NSTextField	*_consoleFontTextField;     /*" connected to "Console Font" */
	IBOutlet NSMatrix	*_sourceWindowPosMatrix;	/*" connected to "Source Window Position" "*/
	IBOutlet NSButton	*_docWindowPosButton;		/* connected to set current position button */
    IBOutlet NSButton	*_consoleWindowPosButton;		/* connected to set current position button */
    IBOutlet NSMatrix	*_consoleWindowPosMatrix;		/* connected to set current position button */
	IBOutlet NSMatrix		*_commandCompletionMatrix; /* select ESCAPE or TAB */
	IBOutlet NSMatrix       *_findMatrix;                   /* connected to Find Panel */

    IBOutlet NSButton       *_tabIndentButton;		/*" connected to "Use Tab" "*/
	IBOutlet NSButtonCell	*_syntaxColorButton;		/*" connected to "Syntax Coloring" "*/
	IBOutlet NSButtonCell   *_selectActivateButton;         /*" connected to "Select on Activate" "*/
	IBOutlet NSButtonCell	*_parensMatchButton;		/*" connected to "Parens Matching "*/
	IBOutlet NSButtonCell	*_spellCheckButton;		/*" connected to "SpellChecking "*/
    IBOutlet NSButtonCell   *_autoSpellCorrectButton;  /*" connect to "Auto Spell Correcting "*/
	IBOutlet NSButtonCell	*_autoCompleteButton;		/*" connected to "Auto Completion "*/
	IBOutlet NSButtonCell	*_bibDeskCompleteButton;	/*" connected to BibDesk Completions "*/
	IBOutlet NSButtonCell	*_lineNumberButton;			/*" connected to Line Number "*/
    IBOutlet NSButtonCell	*_tagMenuButton;			/*" connected to Line Number "*/
	IBOutlet NSButtonCell	*_midEastButton; /*" connected to Arabic, Persian, Hebrew "*/
    IBOutlet NSButtonCell   *_autoSaveButton; /*" connected to AutoSave "*/
	IBOutlet NSButton		*_openEmptyButton;		/*" open empty document on start "*/
	IBOutlet NSButton		*_externalEditorButton;		/*" use external editor "*/
	IBOutlet NSPopUpButton	*_defaultEncodeMatrix;		/*" text encoding "*/
	IBOutlet NSMatrix	*_pdfWindowPosMatrix;		/*" connected to "PDF Window Position" "*/
	IBOutlet NSButton	*_pdfWindowPosButton;		/* connected to current position button */
    IBOutlet NSButton       *_antialiasButton;      /* connect to antialias checkbox */
    IBOutlet NSButton       *oneWindowButton;
	IBOutlet NSTextField	*_magTextField;			/*" connected to magnification text field "*/
	IBOutlet NSButton	*_scrollButton;			/*" connected to scroll button "*/
	IBOutlet NSTextField	*_texCommandTextField;		/*" connected to "TeX program" "*/
	IBOutlet NSTextField	*_latexCommandTextField;	/*" connected to "Latex program" "*/
	IBOutlet NSButton	*_escapeWarningButton;		/*" connected to "Shell Escape Warning" "*/
	IBOutlet NSTextField	*_texGSCommandTextField;	/*" connected to "Tex + GS" "*/
	IBOutlet NSTextField	*_latexGSCommandTextField;	/*" connected to "Latex + GS" "*/
	IBOutlet NSButton	*_savePSButton;			/*" connect to save postscript "*/
	IBOutlet NSTextField	*_tetexBinPathField;		/*" connected to tetex bin path "*/
	IBOutlet NSTextField	*_gsBinPathField;		/*" connected to tetex bin path "*/
	IBOutlet NSTextField	*_texScriptCommandTextField;	/*" connected to "Personal Tex" "*/
	IBOutlet NSTextField	*_latexScriptCommandTextField; /*" connected to Personal Latex" "*/
	IBOutlet NSMatrix	*_defaultScriptMatrix;		/*" connected to "Default Script" "*/
//	IBOutlet NSMatrix       *_defaultMetaPostMatrix;        /*" connected to "MetaPost" "*/
//	IBOutlet NSMatrix       *_defaultBibtexMatrix;          /*" connected to "Bibtex" "*/ // comment out by Terada
	IBOutlet NSMatrix	*_syncMatrix;			/*" connected to "Sync Method" "*/
	IBOutlet NSMatrix	*_defaultCommandMatrix;		/*" connected to "Default Program" "*/
	IBOutlet NSTextField    *_engineTextField;
	IBOutlet NSMatrix       *_distillerMatrix;              /*" connected to "Distiller" "*/
	IBOutlet NSMatrix	*_consoleMatrix;		/*" connected to "Show Console" "*/
	IBOutlet NSFormCell	*_tabsTextField;		/*" connected to tab size text field "*/
	IBOutlet NSButton	*_saveRelatedButton;		/*" connected to Save Related Files "*/
	IBOutlet NSButton       *_autoPDFButton;
	IBOutlet NSButton       *_ptexUtfOutputButton;          // zenitani 1.35 (C)
	IBOutlet NSButton		*_convertUTFButton;
    IBOutlet NSButton       *_openRootFileButton;
    IBOutlet NSButton       *_miniaturizeRootFileButton;
	IBOutlet NSColorWell	*_sourceBackgroundColorWell;
    IBOutlet NSColorWell	*_sourceTextColorWell;
	IBOutlet NSColorWell	*_previewBackgroundColorWell;
	IBOutlet NSColorWell	*_consoleBackgroundColorWell;
	IBOutlet NSColorWell	*_consoleForegroundColorWell;
	IBOutlet NSColorWell	*_highlightBracesColorWell;
	IBOutlet NSTabView		*_tabView;
	IBOutlet NSMatrix		*_consoleResizeMatrix;
 
	IBOutlet NSButton *_showInvisibleCharactersButton; // added by Terada
	IBOutlet NSButton *_showTabCharacterButton; // added by Terada
	IBOutlet NSButton *_showSpaceCharacterButton; // added by Terada
	IBOutlet NSButton *_showNewLineCharacterButton; // added by Terada
	IBOutlet NSButton *_showFullwidthSpaceCharacterButton; // added by Terada
	IBOutlet NSMatrix *_TabCharacterKindMatrix; // added by Terada
	IBOutlet NSMatrix *_SpaceCharacterKindMatrix; // added by Terada
	IBOutlet NSMatrix *_NewLineCharacterKindMatrix; // added by Terada
	IBOutlet NSMatrix *_FullwidthSpaceCharacterKindMatrix; // added by Terada
	IBOutlet NSButton *_alwaysHighlightButton; // added by Terada
	IBOutlet NSButton *_highlightContentButton; // added by Terada
	IBOutlet NSButton *_showIndicatorForMoveButton; // added by Terada
	IBOutlet NSButton *_beepButton; // added by Terada
	IBOutlet NSButton *_flashBackgroundButton; // added by Terada
	IBOutlet NSButton *_checkBraceButton; // added by Terada
	IBOutlet NSButton *_checkBracketButton; // added by Terada
	IBOutlet NSButton *_checkSquareBracketButton; // added by Terada
	IBOutlet NSButton *_checkParenButton; // added by Terada
	IBOutlet NSTextField *_kpsetoolField; // added by Terada
	IBOutlet NSTextField *_bibTeXengineField; // added by Terada
//	IBOutlet NSButton *_makeatletterButton; // added by Terada
    
    IBOutlet NSButton  *_sparkleAutomaticButton;
    IBOutlet NSMatrix  *_sparkleIntervalMatrix;

	NSUndoManager		*_undoManager;			/*" used for discarding all changes when the cancel button was pressed "*/
//	NSFont			*_documentFont;			/*" used to track the font that the user has selected for the document window "*/
//	NSFont			*_consoleFont;			/*" used to track the font that the user has selected for the console window "*/
	BOOL			fontTouched;			/*" if user fiddled with fonts and then cancelled,
																we restore the old one "*/
	BOOL			consoleFontTouched;
	BOOL			consoleBackgroundColorTouched;
	BOOL			consoleForegroundColorTouched;
	BOOL			sourceBackgroundColorTouched;
    BOOL            sourceTextColorTouched;
	BOOL			previewBackgroundColorTouched;
	BOOL			syntaxColorTouched;		/*" if user fiddled with syntax and then cancelled,
																we restore the old one "*/
	BOOL			oldSyntaxColor;			/*" value when preferences shown "*/
	BOOL			autoCompleteTouched;
	BOOL			bibDeskCompleteTouched;
	BOOL			oldAutoComplete;
	BOOL			oldBibDeskComplete;
    BOOL            oldSparkleAutomaticUpdate;
    NSInteger       oldSparkleInterval;
	BOOL			magnificationTouched;
	BOOL			externalEditorTouched;
	BOOL			encodingTouched;
	BOOL			commandCompletionCharTouched;
	BOOL            invisibleCharacterTouched; // added by Terada
	BOOL            highlightTouched; // added by Terada
	BOOL            kpsetoolTouched; // added by Terada
	BOOL            bibTeXengineTouched; // added by Terada
//	BOOL            makeatletterTouched; // added by Terada
    BOOL            sparkleTouched;
	
	IBOutlet NSPopUpButton	*_pageStylePopup;// mitsu 1.29 (O) /*" connected to page style popup button "*/
	IBOutlet NSMatrix       *_firstPageMatrix;// /*" radio buttons for first page left or right in multipage display "*/
	IBOutlet NSPopUpButton	*_resizeOptionPopup;// mitsu 1.29 (O) /*" connected to resize option popup button "*/
	IBOutlet NSPopUpButton	*_imageCopyTypePopup;// mitsu 1.29 (O) /*" connected to image copy type popup button "*/
	IBOutlet NSPopUpButton	*_mouseModePopup;// mitsu 1.29 (O) /*" connected to default mouse mode popup button "*/
	IBOutlet NSButton	*_colorMapButton;// mitsu 1.29 (O)
	IBOutlet NSColorWell	*_copyForeColorWell;// mitsu 1.29 (O)
	IBOutlet NSColorWell	*_copyBackColorWell;// mitsu 1.29 (O)
	IBOutlet NSPopUpButton	*_colorParam1Popup;// mitsu 1.29 (O)
	IBOutlet NSMatrix	*_afterTypesettingMatrix;
}

@property (retain) NSFont		*documentFont;			/*" used to track the font that the user has selected for the document window "*/
@property (retain) NSFont		*consoleFont;			/*" used to track the font that the user has selected for the console window "*/

+ (id)sharedInstance;

//------------------------------------------------------------------------------
// target/action methods
//------------------------------------------------------------------------------
- (IBAction)showPreferences:(id)sender;

- (IBAction)changeDocumentFont:(id)sender;
- (IBAction)changeConsoleFont:(id)sender;
- (IBAction)sourceWindowPosChanged:(id)sender;
- (IBAction)currentDocumentWindowPosDefault:(id)sender;
- (IBAction)syntaxColorPressed:(id)sender;
- (IBAction)selectActivatePressed:(id)sender;
- (IBAction)parensMatchPressed:(id)sender;
- (IBAction)spellCheckPressed:(id)sender;
- (IBAction)spellCorrectPressed:(id)sender;
- (IBAction)autoCompletePressed:(id)sender;
- (IBAction)bibDeskCompletePressed:(id)sender;
- (IBAction)tagMenuButtonPressed:(id)sender;
- (IBAction)showInvisibleCharacterButtonPressed:(id)sender; // added by Terada
- (IBAction)midEastButtonPressed:(id)sender;
- (IBAction)autoSaveButtonPressed:(id)sender;
- (IBAction)emptyButtonPressed:(id)sender;
- (IBAction)externalEditorButtonPressed:(id)sender;
- (IBAction)encodingChanged:(id)sender;
- (IBAction)tabsChanged:(id)sender;
- (IBAction)useTabPressed:(id)sender;
- (IBAction)commandCompletionChanged:(id)sender;
- (IBAction)findPanelChanged:(id)sender;
- (IBAction)defaultEngineCall:(id)sender;


- (IBAction)pdfWindowPosChanged:(id)sender;
- (IBAction)currentPdfWindowPosDefault:(id)sender;
- (IBAction)magChanged:(id)sender;
- (IBAction)scrollPressed:(id)sender;
- (IBAction)firstDoublePageChanged:(id)sender;

- (IBAction)texProgramChanged:(id)sender;
- (IBAction)latexProgramChanged:(id)sender;
- (IBAction)escapeWarningChanged:(id)sender;
- (IBAction)texGSProgramChanged:(id)sender;
- (IBAction)latexGSProgramChanged:(id)sender;
- (IBAction)savePSPressed:(id)sender;
- (IBAction)tetexBinPathChanged:(id)sender;
- (IBAction)gsBinPathChanged:(id)sender;
- (IBAction)texScriptProgramChanged:(id)sender;
- (IBAction)latexScriptProgramChanged:(id)sender;
- (IBAction)defaultScriptChanged:(id)sender;
- (IBAction)syncChanged:(id)sender;
// - (IBAction)defaultMetaPostChanged:(id)sender;
//- (IBAction)defaultBibtexChanged:(id)sender; // comment out by Terada
- (IBAction)distillerChanged:(id)sender;
- (IBAction)defaultProgramChanged:(id)sender;
- (IBAction)setEngine:(id)sender;
- (IBAction)consoleBehaviorChanged:(id)sender;
- (IBAction)saveRelatedButtonPressed:(id)sender;
- (IBAction)autoPDFChanged:(id)sender;
- (IBAction)antialiasChanged:(id)sender;
- (IBAction)ptexUtfOutputPressed:(id)sender; // zenitani 1.35 (C)
- (IBAction)convertUTFPressed:(id)sender;
- (IBAction)openRootFilePressed:(id)sender;
- (IBAction)miniaturizeRootFilePressed:(id)sender;
- (IBAction)afterTypesettingChanged:(id)sender;
- (IBAction)setSourceBackgroundColor:(id)sender;
- (IBAction)setSourceTextColor:(id)sender;
- (IBAction)setPreviewBackgroundColor:(id)sender;
- (IBAction)setHighlightBracesColor:(id)sender;
- (IBAction)setConsoleBackgroundColor:(id)sender;
- (IBAction)setConsoleForegroundColor:(id)sender;
- (IBAction)changeConsoleResize:(id)sender;
- (IBAction)oneWindowChanged:(id)sender;

#ifdef MITSU_PDF
- (IBAction)pageStyleChanged:(id)sender; // mitsu 1.29 (O)
- (IBAction)resizeOptionChanged:(id)sender; // mitsu 1.29 (O)
- (IBAction)imageCopyTypeChanged:(id)sender; // mitsu 1.29 (O)
- (NSPopUpButton *)imageCopyTypePopup; // mitsu 1.29b
- (IBAction)mouseModeChanged:(id)sender; // mitsu 1.29 (O)
- (IBAction)colorMapChanged:(id)sender; // mitsu 1.29 (O)
- (IBAction)copyForeColorChanged:(id)sender; // mitsu 1.29 (O)
- (IBAction)copyBackColorChanged:(id)sender; // mitsu 1.29 (O)
- (IBAction)colorParam1Changed:(id)sender; // mitsu 1.29 (O)
#endif

- (IBAction)okButtonPressed:(id)sender;
- (IBAction)cancelButtonPressed:(id)sender;
- (IBAction)setDefaults:(id)sender;

- (IBAction)highlightChanged:(id)sender; // added by Terada
- (IBAction)invisibleCharacterChanged:(id)sender; // added by Terada
- (IBAction)kpsetoolChanged:(id)sender; // added by Terada
- (IBAction)bibTeXengineChanged:(id)sender; // added by Terada
// - (IBAction)makeatletterChanged:(id)sender; // added by Terada

- (IBAction)sparkleAutomaticCheck:(id)sender;
- (IBAction)sparkleInterval:(id)sender;


//------------------------------------------------------------------------------
// API used by other TeXShop classes
//------------------------------------------------------------------------------
- (NSString *)relativePath:(NSString *)path fromFile:(NSString *)file; // added by zenitani, Feb 13, 2003

- (void)registerFactoryDefaults;

//------------------------------------------------------------------------------
// private API
//------------------------------------------------------------------------------
- (void)updateControlsFromUserDefaults:(NSUserDefaults *)defaults;
- (void)updateDocumentFontTextField;
- (void)updateConsoleFontTextField;

@end
