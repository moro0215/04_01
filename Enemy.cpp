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

//�֐��e�[�u��
void(Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Withdrawal,

};

//�֐��̌Ăяo��
void Enemy::Update() {
	for (int i = 0; i < 3; i++) {
		(this->*spFuncTable[i])();
	}
	
}