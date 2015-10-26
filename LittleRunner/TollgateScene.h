/*
文件名：    TollgateScene.h
描　述：    关卡场景
创建人：    笨木头_钟迪龙 (博客：http://www.benmutou.com)
*/
#ifndef __TollgateScene_H__
#define __TollgateScene_H__

#include "cocos2d.h"

#include "editor-support/cocostudio/CCSGUIReader.h"
#include "ui/CocosGUI.h"
using namespace cocos2d::ui;
using namespace cocostudio;
using namespace cocos2d;

class Player;
class TollgateScene : public Layer {
public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(TollgateScene);
	virtual void update(float delta);
private:
	void initBG();          // 初始化关卡背景
	void loadUI();
	void jumpEvent(Ref*, TouchEventType type);
private:
	Sprite* m_bgSprite1;	// 背景精灵1
	Sprite* m_bgSprite2;	// 背景精灵2
	int m_iScore;
	Text* m_scoreLab;
	LoadingBar* m_hpBar;

	Player* m_player;		// 主角

};

#endif
