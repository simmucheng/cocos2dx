#ifndef __Monster_H__
#define __Monster_H__
#include "cocos2d.h"
#include "Entity.h"
#include "player.h"

USING_NS_CC;

using namespace cocos2d;
class Monster :public Entity{
public:
	Monster();
	~Monster();
	CREATE_FUNC(Monster);
	virtual bool init();
public:
	void show();
	void hide();
	void reset();
	bool isAlive();
	bool isCollideWithPlayer(Player* player);
private:
	bool m_isAlive;
};
#endif
