#include "head.h"


//struct Pos{
//	int x;
//	int y;
//	int status;
//};

int computer[Size][Size][Direction] = {0};
int player[Size][Size][Direction] = {0};
//int chessBoard[Size][Size] = { 0 };

//Main Process Function, choose the best position for computer
int* getBestPos(int Board[Size][Size]){
	int bestPos[2] = { 0, 0 };
	return bestPos;
};

//Get the pos of player from cmd input
int* getInputPos(){
	int inputPosX = 0, inputPosY = 0;
	cout << "Chess Pos (X, Y): ";
	cin >> inputPosX >> inputPosY;
	int inputPos[2] = { inputPosX, inputPosY };
	return inputPos;
};

//Check whether the game is over
int checkWin(int Board[Size][Size]){
	int winner = 0;
	return winner;
};

//Add a chess onto the chessBoard and show
void addChess(int Board[Size][Size], int PosX, int PosY, int who){
	cout << "("<<PosX<<","<< PosY<<")";
	Board[PosX][PosY] = who;
	showBoard(Board);
};

//Show the chessboard
void showBoard(int Board[Size][Size]){
	cout << "\n-------------------------------------------------";
	for (int i = 0; i < Size; i++){
		cout << "\n|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |";
		cout << "\n|";
		for (int j = 0; j < Size; j++){
			cout << "--";
			switch (Board[i][j]){
			    case 0: {cout << " "; break; }
			    case 1: {cout << "*"; break; }
			    case 2: {cout << "O"; break; }
			}
		}
		cout << "--|"<<i;
	}
	cout << "\n-------------------------------------------------\n";
	cout << "   0  1  2  3  4  5  6  7  8  9  10 11 12 13 14\n";
};

/*
int maxMinAlphaBetaCut(int** chessBoard, int whiteOrBlack, int depth, Point opPos, int alpha, int beta)
{
	int bestValue, curValue;  // bestValue是最好的分数， curValue是试探下子后，该次下子的分数

	if (isBE5AtPoint(chessBoard, whiteOrBlack == 2 ? 1 : 2, opPos))   // 如果在这里可以分出胜负
	{   
		if (whiteOrBlack == 1){ return FIVE_ALIKE; }  // 电脑赢。这里为什么不是2呢？因为这里whiteOrBlack与opPos是相反关系
		else { return -FIVE_ALIKE; }  // 玩家赢
	}
	else if (depth == 0){ bestValue = getValue(chessBoard); }   //深度为0，估值返回
	     else{// 下面开始是利用了剪枝思想的极大极小过程
		     if (whiteOrBlack == 2)  // 此节点为电脑白子，取极大值
		     {// 下面开始对各个可以下的子进行评分
			     for (int i = 0; i <= 14; i++)
			     {
				     for (int j = 0; j <= 14; j++)
				     {
					     if (chessBoard[i][j] == 0)  // 如果可以下子
					     {
							 if (alpha >= beta) { return alpha; } // alpha剪枝
						     chessBoard[i][j] = whiteOrBlack; // 试探下子
						     curValue = maxMinAlphaBetaCut(chessBoard, 1, depth - 1, cocos2d::Point(i, j), alpha, beta);
						     chessBoard[i][j] = 0;  // 撤消下子
						     if (curValue > alpha){alpha = curValue;} //子节点的最大值记录到alpha中
					      }
				      }
			      }
			      bestValue = alpha;
		      }// end if (whiteOrBlack == 2)
		      else if (whiteOrBlack == 1)  // 此节点为玩家黑子，取极小值
		      {
			      for (int i = 0; i <= 14; i++)
			      {
				      for (int j = 0; j <= 14; j++)
				      {
					      if (chessBoard[i][j] == 0)  // 如果可以下子
					      {
							  if (alpha >= beta) { return beta; } // beta剪枝
						      chessBoard[i][j] = whiteOrBlack; // 试探下子
						      curValue = maxMinWithAlphaBetaCut(chessBoard, 2, depth - 1, cocos2d::Point(i, j), alpha, beta);
						      chessBoard[i][j] = 0;  // 撤消下子
							  if (curValue < beta){beta = curValue;} //子节点的最小值记录到beta中	      
					       }
				      }
			       } // end else if (whiteOrBlack == 1) 
			       bestValue = beta;
		      }
	      }  // end else : (depth > 0)
	return bestValue;
}*/