/*** PROTOS FOR PTREPLAY.LIBRARY ***/
// Copy this file to ~/Amiga-cc/amiga_sdk/NDK_3.9/Include/include_h/clib
// This file is the original from this archive : http://aminet.net/mus/play/ptreplay66.lha

struct Module *PTLoadModule(STRPTR);
VOID PTUnloadModule(struct Module *);
ULONG PTPlay(struct Module *);
ULONG PTStop(struct Module *);
ULONG PTPause(struct Module *);
ULONG PTResume(struct Module *);
/* New in V2 */
VOID PTFade(struct Module *, UBYTE);
/* New in V3 */
VOID PTSetVolume(struct Module *, UBYTE);
/* New in V4 */
UBYTE PTSongPos(struct Module *);
UBYTE PTSongLen(struct Module *);
UBYTE PTSongPattern(struct Module *,UWORD);
UBYTE PTPatternPos(struct Module *);
APTR PTPatternData(struct Module *, UBYTE, UBYTE);
void PTInstallBits(struct Module *, BYTE, BYTE, BYTE, BYTE);
struct Module *PTSetupMod(APTR);
void PTFreeMod(struct Module *);
void PTStartFade(struct Module *, UBYTE);
/* New in V5 */
void PTOnChannel(struct Module *, BYTE);
void PTOffChannel(struct Module *, BYTE);
void PTSetPos(struct Module *,UBYTE);
void PTSetPri(BYTE);
BYTE PTGetPri(void);
/* New in V6 */
BYTE PTGetChan(void);
struct PTSample *PTGetSample(struct Module *,WORD);