#include "Enemy.h"
#include <stdio.h>

void Enemy::Approach() {
	printf("�ڋ�\n");
}

void Enemy::Shooting() {
	printf("�ˌ�\n");
}

void Enemy::Withdrawal() {
	printf("���E\n");
}


void(Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Withdrawal,

};

void Enemy::Update() {

	(this->*spFuncTable[0])();
	(this->*spFuncTable[1])();
	(this->*spFuncTable[2])();
	
}