//
// GameMain.cpp
//
// ゲーム開発研究会Git練習用プロジェクト
//



// ヘッダファイルの読み込み ========================================================
#include "DxLib.h"
#include "GameMain.h"



// グローバル変数の定義 ============================================================
int g_inputState;		// 入力状態




// 関数の定義 ======================================================================

// -------------------------------------------------
// 初期化処理
// -------------------------------------------------
void Initialize(void)
{
}

// -------------------------------------------------
// 更新処理
// -------------------------------------------------
void Update(void)
{
	// ジョイパッドとキーの入力状態を取得
	g_inputState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
}

// -------------------------------------------------
// 描画処理
// -------------------------------------------------
void Render(void)
{
	// ボックス表示
	DrawBox(SCREEN_WIDTH / 2 - 32, SCREEN_HEIGHT / 2 - 32, SCREEN_WIDTH / 2 + 32, SCREEN_HEIGHT / 2 + 32, GetColor(255, 255, 255), TRUE);
	// 円を追加
	DrawCircle(64, 64, 32, GetColor(255, 255, 255), TRUE);
}

// -------------------------------------------------
// 終了処理
// -------------------------------------------------
void Finalize(void)
{
}