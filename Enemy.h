#pragma once
class Enemy {
public:
	//�ڋ�
	void Approach();
	//�ˌ�
	void Shooting();
	//���E
	void Withdrawal();

	//�X�V����
	void Update();

private:

	static void(Enemy::* spFuncTable[])();



};