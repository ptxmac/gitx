//
//  PBGitRepository.h
//  GitTest
//
//  Created by Pieter de Bie on 13-06-08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBGitRevList.h"

@interface PBGitRepository : NSObject {
	NSString* path;
	PBGitRevList* revisionList;
}

+ (PBGitRepository*) repositoryWithPath:(NSString*) path;
- (PBGitRepository*) initWithPath:(NSString*) path;

- (NSFileHandle*) handleForCommand:(NSString*) cmd;
- (NSFileHandle*) handleForArguments:(NSArray*) args;

@property (copy) NSString* path;
@property (readonly) PBGitRevList* revisionList;

@end
