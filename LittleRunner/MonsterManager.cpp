#include "MonsterManager.h"
#include "Player.h"
#include "Monster.h"
#include "Entity.h"

bool MonsterManager::init(){
	createMonster();
	this->scheduleUpdate();

	
	return true;
}

void MonsterManager::createMonster(){
	Monster* monster = NULL;
	Sprite* sprite = NULL;

	for (int i = 0; i < MAX_MONSTER_NUM; i++){
		monster = Monster::create();
		monster->bindSprite(Sprite::create("monster.png"));
		monster->reset();

		monster->reset();
		this->addChild(monster);

		m_monsterArr.pushBack(monster);
	}
}
void MonsterManager::update(float dt){
	for (auto monster : m_monsterArr){
		if (monster->isAlive()){
			monster->setPositionX(monster->getPositionX() - 4);

			if (monster->getPositionX() < 0){
				monster->hide();
			}
			else if (monster->isCollideWithPlayer(m_player)){
				m_player->hit();
				monster->hide();
			}
		}
		else {
			monster->show();
		}
	}
}
void MonsterManager::bindPlayer(Player* player){
	m_player = player;
}
