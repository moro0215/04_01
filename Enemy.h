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
	//�����o�֐��|�C���^�̃e�[�u��
	static void(Enemy::* spFuncTable[])();



};