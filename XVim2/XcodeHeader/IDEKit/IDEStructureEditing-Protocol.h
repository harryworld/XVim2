//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSIndexSet, NSSet, NSString;
@protocol IDEStructureEditingContext;

@protocol IDEStructureEditing
- (BOOL)structureEditSetName:(NSString *)arg1 inContext:(id <IDEStructureEditingContext>)arg2;
- (BOOL)allowRemovingContainerGroup;
- (BOOL)structureEditName:(NSString *)arg1 inContext:(id <IDEStructureEditingContext>)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (BOOL)canStructureEditName;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(NSIndexSet *)arg1 error:(id *)arg2;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(NSIndexSet *)arg1;
- (BOOL)structureEditSortSubitemsAtIndexes:(NSIndexSet *)arg1 byNameOrByType:(BOOL)arg2;
- (BOOL)canStructureEditSortSubitemsAtIndexes:(NSIndexSet *)arg1 byNameOrByType:(BOOL)arg2;
- (NSArray *)structureEditInsertFileURLs:(NSArray *)arg1 atIndex:(unsigned long long)arg2 createGroupsForFolders:(BOOL)arg3;
- (BOOL)canStructureEditInsertFileURLs:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
- (NSArray *)structureEditInsertSubitems:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;

@optional
- (NSSet *)allowedFileTypesOfChildItems;
@end

