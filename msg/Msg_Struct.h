/**
 * struct Msg_Struct description
 *
 * [This file was auto-generated. Please Do not edit]
 *
 */

#ifndef MSG_STRUCT_H_
#define MSG_STRUCT_H_

#include "Block_Buffer.h"
struct Role_Info {

	int64_t role_id; //玩家id

	std::string account; //玩家账号名

	std::string role_name; //玩家名字

	int32_t level; //玩家等级

	int32_t exp; //玩家经验

	int32_t career; //0(女),1(男)

	int32_t gender; //职业1-3

	int32_t vitality; //玩家体力

	int32_t vip; //vip等级

	int32_t charge_gold; //总共充值的元宝数

	Role_Info(void);
	void serialize(Block_Buffer &buffer) const;
	int deserialize(Block_Buffer &buffer);
	void reset(void);
};
struct Property_Detail {

	int32_t type; //属性类型

	int32_t value; //属性值

	Property_Detail(void);
	void serialize(Block_Buffer &buffer) const;
	int deserialize(Block_Buffer &buffer);
	void reset(void);
};
struct Item_Info {

	int32_t item_id;

	int32_t amount;

	int32_t level;

	Item_Info(void);
	void serialize(Block_Buffer &buffer) const;
	int deserialize(Block_Buffer &buffer);
	void reset(void);
};
struct Hero_Detail {

	int32_t hero_id; // 英雄id

	int32_t level; //英雄等级

	int32_t exp; //英雄经验

	int32_t star; //英雄星级

	int32_t quality; //英雄品质等级

	std::vector<Item_Info> equip_info; //英雄装备信息

	std::vector<Property_Detail> property_info; //英雄属性信息

	Hero_Detail(void);
	void serialize(Block_Buffer &buffer) const;
	int deserialize(Block_Buffer &buffer);
	void reset(void);
};
struct Mail_Detail {

	bool pickup; //是否收取过附件

	int32_t mail_id; //邮件id

	int32_t send_time; //发邮件时间

	int32_t sender_type; //发件人类型

	int64_t sender_id; //发件人id

	std::string sender_name; //发件人名字

	std::string mail_title; //邮件标题

	std::string mail_content; //邮件内容

	int32_t copper; //铜钱

	int32_t gold; //元宝

	Mail_Detail(void);
	void serialize(Block_Buffer &buffer) const;
	int deserialize(Block_Buffer &buffer);
	void reset(void);
};


#endif
