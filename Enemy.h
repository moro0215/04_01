#pragma once
class Enemy {
public:
	//接近
	void Approach();
	//射撃
	void Shooting();
	//離脱
	void Withdrawal();

	//更新処理
	void Update();

private:
	//メンバ関数ポインタのテーブル
	static void(Enemy::* spFuncTable[])();



};