# Amiga ProTracker modules replay library headers for VBCC

Everything is in the title :-) I used the [fd2pragma](http://aminet.net/package/dev/misc/fd2pragma) utility to convert original headers to assembler inlines.
That also gave me a modified ptreplay.h, that I again modified manually to make it work with the [VBCC cross-compiler](https://github.com/nicolasbauw/Amiga-cc).

Type **make** to compile the example player. The original ptreplay.library is included.