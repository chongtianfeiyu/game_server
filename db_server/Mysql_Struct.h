/*
 * Mysql_Struct.h
 *
 *  Created on: 2016年7月20日
 *      Author: zhangyalei
 */

#ifndef MYSQL_STRUCT_H_
#define MYSQL_STRUCT_H_

#include "Base_Struct.h"
#include "Mysql_Conn.h"

class Mysql_Struct: public Base_Struct {
public:
	Mysql_Struct(Xml &xml, TiXmlNode *node);
	virtual ~Mysql_Struct();

	virtual void create_data(int64_t key_index);
	virtual void load_data(int64_t key_index, Block_Buffer &buffer);
	virtual void save_data(Block_Buffer &buffer);
	virtual void save_data_vector(Block_Buffer &buffer);
	virtual void delete_data(Block_Buffer &buffer);

private:
	void create_data_arg(Field_Info &field_info, std::string &str_name, std::string &str_value, int64_t key_index);
	void create_data_vector(Field_Info &field_info, std::string &str_name, std::string &str_value);
	void create_data_struct(Field_Info &field_info, std::string &str_name, std::string &str_value);

	void build_buffer_arg(Field_Info &field_info, Block_Buffer &buffer, sql::ResultSet *result);
	void build_buffer_vector(Field_Info &field_info, Block_Buffer &buffer, sql::ResultSet *result);
	void build_buffer_struct(Field_Info &field_info, Block_Buffer &buffer, sql::ResultSet *result);

	void build_sql_arg(Field_Info &field_info, Block_Buffer &buffer, std::string &str_sql);
	void build_sql_vector(Field_Info &field_info, Block_Buffer &buffer, std::string &str_sql);
	void build_sql_struct(Field_Info &field_info, Block_Buffer &buffer, std::string &str_sql);
};

#endif /* MYSQL_STRUCT_H_ */