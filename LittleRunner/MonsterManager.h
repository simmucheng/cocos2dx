#ifndef __MonsterManager_H__
#define __MonsterManager_H__
#include "cocos2d.h"
#include "Monster.h"
#include "Entity.h"
USING_NS_CC;

using namespace cocos2d;
#define MAX_MONSTER_NUM 10
class MonsterManager :public Node{
public:
	CREATE_FUNC(MonsterManager);
	virtual bool init();

	virtual void update(float dt);

	void bindPlayer(Player* player);
private:
	void createMonster();
	
private:
	Vector<Monster*>m_monsterArr;
	Player* m_player;
};
#endif
