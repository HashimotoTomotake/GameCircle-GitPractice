//
// GameMain.h
//
#pragma once


// �萔�̒�` ====================================================

#define SCREEN_WIDTH		(800)						// ��ʕ�
#define SCREEN_HEIGHT		(600)						// ��ʍ���

#define SCREEN_TOP			(0)							// ��ʏ�[
#define SCREEN_LEFT			(0)							// ��ʍ��[
#define SCREEN_BOTTOM		(SCREEN_HEIGHT)				// ��ʉ��[
#define SCREEN_RIGHT		(SCREEN_WIDTH)				// ��ʉE�[

#define SCREEN_CENTER_X		(SCREEN_WIDTH / 2)			// ��ʒ��� X
#define SCREEN_CENTER_Y		(SCREEN_HEIGHT / 2)			// ��ʒ��� Y


// �֐��̐錾 ====================================================

void Initialize(void);		// ����������
void Update(void);			// �X�V����
void Render(void);			// �`�揈��
void Finalize(void);		// �I������
