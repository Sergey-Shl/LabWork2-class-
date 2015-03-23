class db_store
{
private:
	int store_num;
	std::string item_name;
	int item_id;
	int item_price;
	int item_count;
	int item_quantity;
public:
	db_store();
	db_store(int s_num, std::string i_name, int i_id, int i_price, int c, int q);
	int getStore_num() const;
	void setStore_num(int num);
	std::string getItem_name();
	void setItem_name(std::string name);
	int getItem_id() const;
	void setItem_id(int id);
	int getProice() const;
	void setPrice(int price);
	int getCount() const;
	void setCount(int count);
	int getQuantity() const;
	void setQuantity(int quantity);
};

db_store::db_store(int s_num = 0, std::string i_name = "Unknown", int i_id = 0, int i_price = 0, int c = 0, int q = 0)
{
	setStore_num(s_num);
	setItem_name(i_name);
	setItem_id(i_id);
	setPrice(i_price);
	setCount(c);
	setQuantity(q);
}
db_store::db_store()
{
	setStore_num(0);
	setItem_name("Unknown");
	setItem_id(0);
	setPrice(0);
	setCount(0);
	setQuantity(0);
}

int db_store::getStore_num() const
{
	return store_num;
}
void db_store::setStore_num(int num)
{
	store_num = num;
}

std::string db_store::getItem_name()
{
	return item_name;
}
void db_store::setItem_name(std::string name)
{
	item_name = name;
}

int db_store::getItem_id() const
{
	return item_id;
}
void db_store::setItem_id(int id)
{
	item_id = id;
}

int db_store::getProice() const
{
	return item_price;
}
void db_store::setPrice(int price)
{
	item_price = price;
}

int db_store::getCount() const
{
	return item_count;
}
void db_store::setCount(int i_count)
{
	item_count = i_count;
}

int db_store::getQuantity() const
{
	return item_quantity;
}
void db_store::setQuantity(int i_quantity)
{
	item_quantity = i_quantity;
}
