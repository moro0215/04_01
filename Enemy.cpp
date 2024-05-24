#include "Enemy.h"
#include <stdio.h>

void Enemy::Approach() {
	printf("接近\n");
}

void Enemy::Shooting() {
	printf("射撃\n");
}

void Enemy::Withdrawal() {
	printf("離脱\n");
}

//関数テーブル
void(Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Withdrawal,

};

//関数の呼び出し
void Enemy::Update() {
	for (int i = 0; i < 3; i++) {
		(this->*spFuncTable[i])();
	}
	
}