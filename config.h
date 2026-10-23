#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 0

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "sb-music", 0, 1)  \
    X("", "sb-vol", 0, 2)   \
    X("", "sb-wifi", 10, 3) \
    X("", "sb-ramperc", 10, 4) \
    X("", "sb-home", 60, 5)   \
    X("", "sb-date", 5, 6) \
    X("", "sb-time", 5, 7)     \

#endif  // CONFIG_H
