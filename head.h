#include <iostream>
#include <iostream>
#include<windows.h>

#define Direction 4
#define Size 15
#define Deep 3

#define Fourlive 3000000 // ?AAAA?
#define FourA 2500       // AAAA?
#define FourB 3000       // AAA?A
#define FourC 2600       // AA?AA
#define Threelive 3000   // ??AAA??
#define ThreeA 500       // AAA??
#define ThreeB 800       // ?A?AA?
#define ThreeC 600       // A??AA
#define ThreeD 550       // A?A?A
#define Twolive 650      // ???AA???
#define TwoA 150        // AA???
#define TwoB 250        // ??A?A??
#define TwoC 200        // ?A??A?

using namespace std;

struct Pos;
int* getBestPos(int Board[Size][Size]);
int* getInputPos();
int checkWin(int Board[Size][Size]);
void addChess(int Board[Size][Size], int PosX, int PosY, int who);
void showBoard(int Board[Size][Size]);
