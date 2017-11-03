#include "head.h"

using namespace std;

int main(){
	char action = ' ';
	int chessBoard[Size][Size] = { 0 };
	int *computerPos;
	int *playerPos;

	cout << "Test Gogang process: (s,q):";
	cin >> action;
	while (action != 'q' && action != 's'){
		cout << "Wrong ! Input again (s,q): ";
		cin >> action;
	}
	switch (action){
	    case 'q':{cout << "Thanks and Bye!\n"; Sleep(2000); break;}
		case 's':{
			cout << "Start Gobang Game...\n";
			while (true){
				computerPos = getInputPos(); // getBestPos(chessBoard)
				addChess(chessBoard, computerPos[0], computerPos[1], 1);
				if (checkWin(chessBoard) != 0){ break; }
				playerPos = getInputPos();
				addChess(chessBoard, playerPos[0], playerPos[1], 2);
				if (checkWin(chessBoard) != 0){ break; }
			}
			switch (checkWin(chessBoard)){
			    case '1':{cout << "Computer win!\n";break;}
				case '2':{cout << "Player win!\n";break;}
			}
			break;
		}
		default:{cout << "Input Error!"; }
	}
	return 0;
}
