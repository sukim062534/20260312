#pragma once

#ifndef __ENGINE_H__ //if not difine
#define __ENGINE_H__

extern int MAP[10][10]; //extern = 이게 어딘가에 있을거야 cpp 파일에

//custom data type
//구조체인데 새로운 자료형을 만듦 
//struct - 구조체 FVector2D - 새로운 자료 타입
struct FVector2i
{
	int X;
	int Y;
	
};
extern FVector2i PlayerPosition;

int Input();
void Tick(int KeyCode);
void Render();

void Gotoxy(int x, int y); //윈도우 콘솔 커서 위치 변경
void Clear();
void AddPlayerOffset(int DeltaX, int DeltaY);

#endif //__ENGINE_H__