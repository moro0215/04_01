#pragma once
class Enemy {
public:
	//Ú‹ß
	void Approach();
	//ËŒ‚
	void Shooting();
	//—£’E
	void Withdrawal();

	//XVˆ—
	void Update();

private:

	static void(Enemy::* spFuncTable[])();



};