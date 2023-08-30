#define CMDLENGTH 45
#define DELIMITER " "
#define CLICKABLE_BLOCKS

/*		script	     interval	signal 
 signal maust be different for every one  */
const Block blocks[] = {
	BLOCK("sb-disk",    1800,   19),
	BLOCK("sb-memory",  10,     20),
	BLOCK("sb-cpu",     5,      23),
	BLOCK("sb-volume",  0,      21),
	BLOCK("sb-nettraf", 3,      22),
	BLOCK("sb-clock",   60,     24),
	BLOCK("sb-help",    0,      25),
	BLOCK("sb-exit",    0,      26)
};
