#include <ultra64.h>
#include "sm64.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "levels/intro/header.h"
#ifdef PROFILE_BOOT_LEVEL
#include "levels/scripts.h"
#include "level_table.h"
#endif

#include "make_const_nonconst.h"

const LevelScript level_script_entry[] = {
    INIT_LEVEL(),
    SLEEP(/*frames*/ 2),
    BLACKOUT(/*active*/ FALSE),
#ifdef PROFILE_BOOT_LEVEL
    SET_REG(/*value*/ PROFILE_BOOT_LEVEL),
    EXECUTE(/*seg*/ 0x15, /*script*/ _scriptsSegmentRomStart, /*scriptEnd*/ _scriptsSegmentRomEnd, /*entry*/ level_main_scripts_entry),
#else
    SET_REG(/*value*/ 0),
    EXECUTE(/*seg*/ 0x14, /*script*/ _introSegmentRomStart, /*scriptEnd*/ _introSegmentRomEnd, /*entry*/ level_intro_splash_screen),
#endif
    JUMP(/*target*/ level_script_entry),
};
