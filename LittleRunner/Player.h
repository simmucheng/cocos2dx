/*
文件名：    Player.h
描　述：    主角实体
创建人：    笨木头_钟迪龙 (博客：http://www.benmutou.com)
*/
#ifndef __Player_H__
#define __Player_H__

#include "cocos2d.h"
#include "Entity.h"
using namespace cocos2d;

#define JUMP_ACTION_TAG 1

class Player : public Entity {
public:
	Player();
	~Player();
	void jump();
	void hit();
	int getiHP();
	void resetData();
	CREATE_FUNC(Player);
	virtual bool init();

private:
	bool m_isJumping;
	int m_iHP;
};

#endif
