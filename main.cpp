#include <stdio.h>
#include "Enemy.h"

int main() {
	//�R���X�g���N�^
	Enemy* enemy = new Enemy();
	//�X�V����
	enemy->Update();
	//�f�X�g���N�^
	delete enemy;

	return 0;
}