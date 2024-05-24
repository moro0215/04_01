#include <stdio.h>
#include "Enemy.h"

int main() {
	//コンストラクタ
	Enemy* enemy = new Enemy();
	//更新処理
	enemy->Update();
	//デストラクタ
	delete enemy;

	return 0;
}