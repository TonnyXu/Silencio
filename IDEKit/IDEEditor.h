//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTFindBar, DVTNotificationToken, DVTObservingToken, DVTScopeBarsManager, IDEEditorContext, IDEEditorDocument, IDEFileTextSettings;
@protocol DVTTextFindable, IDEEditorDelegate;

@interface IDEEditor : IDEViewController

+ (BOOL)canProvideCurrentSelectedItems;
@property(retain) id <IDEEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDEFileTextSettings *fileTextSettings; // @synthesize fileTextSettings=_fileTextSettings;
@property(retain, nonatomic) id <DVTTextFindable> findableObject; // @synthesize findableObject=_findableObject;
@property(retain) IDEEditorContext *editorContext; // @synthesize editorContext=_editorContext;
@property(retain) IDEEditorDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) IDEEditorDocument *documentForNavBarStructure; // @synthesize documentForNavBarStructure=_documentForNavBarStructure;
@property BOOL discardsFindResultsWhenContentChanges; // @synthesize discardsFindResultsWhenContentChanges=_discardsFindResultsWhenContentChanges;
- (id)relatedMenuItemsForNavItem:(id)arg1;
- (void)didSetupEditor;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)selectDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)primitiveInvalidate;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
@property(readonly) NSScrollView *mainScrollView;
@property(readonly) DVTScopeBarsManager *scopeBarsManager;
@property(readonly, getter=isPrimaryEditor) BOOL primaryEditor;
- (void)setupContextMenuWithMenu:(id)arg1 withContext:(id)arg2;
- (void)takeFocus;
@property(readonly) DVTFindBar *findBar; // @synthesize findBar=_findBar;
- (void)editorContextDidHideFindBar;
- (id)createFindBar;
@property(readonly) BOOL findBarSupported;
- (id)undoManager;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initUsingDefaultNib;

@end

