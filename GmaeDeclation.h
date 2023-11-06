#pragma once
//BroadInitialization
void InitBroad(char broad[3][3], int row, int col);
//BroadDisplay
void DisplayBroad(char broad[3][3], int row, int col);
//PlayerMove
void PlayerMove(char broad[3][3], int row, int col);
//ComputerMove
void ComputerMove(char broad[3][3], int row, int col);
//JudgeWinorLose
void Iswin(char broad[3][3], int row, int col);

