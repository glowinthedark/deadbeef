//
//  ShellexecTests.m
//  Tests
//
//  Created by Alexey Yakovenko on 12/27/19.
//  Copyright © 2019 Alexey Yakovenko. All rights reserved.
//

#import <XCTest/XCTest.h>
//#include <string.h>
#include "deadbeef.h"
#include "playlist.h"

int
shellexec_eval_command (const char *shcommand, char *output, size_t size, DB_playItem_t *it);

@interface ShellexecTests : XCTestCase

@end

@implementation ShellexecTests

- (void)test_EvalCommand_FilePathNoSpecialChars_OutputsDirectory {
    char output[_POSIX_ARG_MAX];
    playItem_t *it = pl_item_alloc ();
    pl_add_meta (it, ":URI", "/storage/music/file.mp3");
    int res = shellexec_eval_command ("%D", output, sizeof (output), (DB_playItem_t *)it);
    XCTAssertEqual(res, 0);
    XCTAssertTrue(!strcmp (output, "'/storage/music'&"));
}

- (void)test_EvalCommand_DirectoryWithSpecialChars_OutputsDirectory {
    char output[_POSIX_ARG_MAX];
    playItem_t *it = pl_item_alloc ();
    pl_add_meta (it, ":URI", "/storage/folder''name/file.mp3");
    int res = shellexec_eval_command ("%D", output, sizeof (output), (DB_playItem_t *)it);
    XCTAssertEqual(res, 0);
    XCTAssertTrue(!strcmp (output, "'/storage/folder'\"'\"''\"'\"'name'&"));
}


@end
